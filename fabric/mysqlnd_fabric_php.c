/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2013 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Andrey Hristov <andrey@php.net>                              |
  |         Ulf Wendel <uw@php.net>                                      |
  |         Johannes Schlueter <johannes@php.net>                        |
  +----------------------------------------------------------------------+
*/

#include "zend.h"
#include "zend_alloc.h"
#include "main/php.h"
#include "main/spprintf.h"
#include "main/php_streams.h"

#include "mysqlnd_ms.h"
#include "mysqlnd_fabric.h"
#include "mysqlnd_fabric_priv.h"

zend_string *mysqlnd_fabric_http(mysqlnd_fabric *fabric, char *url, char *request_body, size_t request_body_len)
{
	_MS_STR_DECL(ret);
	zval method, content, header;
	php_stream_context *ctxt;
	php_stream *stream = NULL;
	TSRMLS_FETCH();
	
	_MS_ZVAL_STRINGL(&method, "POST", sizeof("POST")-1);
	_MS_ZVAL_STRINGL(&content, request_body, request_body_len);
	_MS_ZVAL_STRINGL(&header, "Content-type: text/xml", sizeof("Content-type: text/xml")-1);
	/* prevent anybody from freeing these */
/*	Z_SET_ISREF(method);
	Z_SET_ISREF(content);
	Z_SET_ISREF(header);
	Z_SET_REFCOUNT(method, 2);
	Z_SET_REFCOUNT(content, 2);
	Z_SET_REFCOUNT(header, 2); */
	
	ctxt = php_stream_context_alloc(TSRMLS_C);
	php_stream_context_set_option(ctxt, "http", "method", &method);
	php_stream_context_set_option(ctxt, "http", "content", &content);
	php_stream_context_set_option(ctxt, "http", "header", &header);
    /* TODO: Switch to quiet mode? */
	stream = php_stream_open_wrapper_ex(url, "rb", REPORT_ERRORS, NULL, ctxt);
	if (stream) {
		_MS_STR_L_FUNC_PS_1(php_stream_copy_to_mem, stream, ret, PHP_STREAM_COPY_ALL, 0);
	    php_stream_close(stream);
	}
	
    zval_dtor(&method);zval_dtor(&content);zval_dtor(&header);
    php_stream_context_free(ctxt);
    _MS_RETURN_ZSTR(ret, 0);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
