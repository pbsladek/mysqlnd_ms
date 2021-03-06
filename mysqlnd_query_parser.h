
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     QC_TOKEN_ACCESSIBLE = 258,
     QC_TOKEN_ACTION = 259,
     QC_TOKEN_ADD = 260,
     QC_TOKEN_ADDDATE = 261,
     QC_TOKEN_AFTER = 262,
     QC_TOKEN_AGAINST = 263,
     QC_TOKEN_AGGREGATE = 264,
     QC_TOKEN_ALGORITHM = 265,
     QC_TOKEN_ALL = 266,
     QC_TOKEN_ALTER = 267,
     QC_TOKEN_ANALYZE = 268,
     QC_TOKEN_AND_AND = 269,
     QC_TOKEN_AND = 270,
     QC_TOKEN_BETWEEN_AND = 271,
     QC_TOKEN_ANY = 272,
     QC_TOKEN_AS = 273,
     QC_TOKEN_ASC = 274,
     QC_TOKEN_ASCII = 275,
     QC_TOKEN_ASENSITIVE = 276,
     QC_TOKEN_AT = 277,
     QC_TOKEN_AUTHORS = 278,
     QC_TOKEN_AUTOEXTEND_SIZE = 279,
     QC_TOKEN_AUTO_INC = 280,
     QC_TOKEN_AVG_ROW_LENGTH = 281,
     QC_TOKEN_AVG = 282,
     QC_TOKEN_BACKUP = 283,
     QC_TOKEN_BEFORE = 284,
     QC_TOKEN_BEGIN = 285,
     QC_TOKEN_BETWEEN = 286,
     QC_TOKEN_BIGINT = 287,
     QC_TOKEN_BINARY = 288,
     QC_TOKEN_BINLOG = 289,
     QC_TOKEN_BIN_NUM = 290,
     QC_TOKEN_BIT_AND = 291,
     QC_TOKEN_BIT_OR = 292,
     QC_TOKEN_BIT = 293,
     QC_TOKEN_BIT_XOR = 294,
     QC_TOKEN_BLOB = 295,
     QC_TOKEN_BLOCK = 296,
     QC_TOKEN_BOOLEAN = 297,
     QC_TOKEN_BOOL = 298,
     QC_TOKEN_BOTH = 299,
     QC_TOKEN_BTREE = 300,
     QC_TOKEN_BY = 301,
     QC_TOKEN_BYTE = 302,
     QC_TOKEN_CACHE = 303,
     QC_TOKEN_CALL = 304,
     QC_TOKEN_CASCADE = 305,
     QC_TOKEN_CASCADED = 306,
     QC_TOKEN_CASE = 307,
     QC_TOKEN_CAST = 308,
     QC_TOKEN_CATALOG_NAME = 309,
     QC_TOKEN_CHAIN = 310,
     QC_TOKEN_CHANGE = 311,
     QC_TOKEN_CHANGED = 312,
     QC_TOKEN_CHARSET = 313,
     QC_TOKEN_CHAR = 314,
     QC_TOKEN_CHECKSUM = 315,
     QC_TOKEN_CHECK = 316,
     QC_TOKEN_CIPHER = 317,
     QC_TOKEN_CLASS_ORIGIN = 318,
     QC_TOKEN_CLIENT = 319,
     QC_TOKEN_CLOSE = 320,
     QC_TOKEN_COALESCE = 321,
     QC_TOKEN_CODE = 322,
     QC_TOKEN_COLLATE = 323,
     QC_TOKEN_COLLATION = 324,
     QC_TOKEN_COLUMNS = 325,
     QC_TOKEN_COLUMN = 326,
     QC_TOKEN_COLUMN_NAME = 327,
     QC_TOKEN_COMMENT = 328,
     QC_TOKEN_COMMITTED = 329,
     QC_TOKEN_COMMIT = 330,
     QC_TOKEN_COMPACT = 331,
     QC_TOKEN_COMPLETION = 332,
     QC_TOKEN_COMPRESSED = 333,
     QC_TOKEN_CONCURRENT = 334,
     QC_TOKEN_CONDITION = 335,
     QC_TOKEN_CONNECTION = 336,
     QC_TOKEN_CONSISTENT = 337,
     QC_TOKEN_CONSTRAINT = 338,
     QC_TOKEN_CONSTRAINT_CATALOG = 339,
     QC_TOKEN_CONSTRAINT_NAME = 340,
     QC_TOKEN_CONSTRAINT_SCHEMA = 341,
     QC_TOKEN_CONTAINS = 342,
     QC_TOKEN_CONTEXT = 343,
     QC_TOKEN_CONTINUE = 344,
     QC_TOKEN_CONTRIBUTORS = 345,
     QC_TOKEN_CONVERT = 346,
     QC_TOKEN_COUNT = 347,
     QC_TOKEN_CPU = 348,
     QC_TOKEN_CREATE = 349,
     QC_TOKEN_CROSS = 350,
     QC_TOKEN_CUBE = 351,
     QC_TOKEN_CURDATE = 352,
     QC_TOKEN_CURRENT_USER = 353,
     QC_TOKEN_CURSOR = 354,
     QC_TOKEN_CURSOR_NAME = 355,
     QC_TOKEN_CURTIME = 356,
     QC_TOKEN_DATABASE = 357,
     QC_TOKEN_DATABASES = 358,
     QC_TOKEN_DATAFILE = 359,
     QC_TOKEN_DATA = 360,
     QC_TOKEN_DATETIME = 361,
     QC_TOKEN_DATE_ADD_INTERVAL = 362,
     QC_TOKEN_DATE_SUB_INTERVAL = 363,
     QC_TOKEN_DATE = 364,
     QC_TOKEN_DAY_HOUR = 365,
     QC_TOKEN_DAY_MICROSECOND = 366,
     QC_TOKEN_DAY_MINUTE = 367,
     QC_TOKEN_DAY_SECOND = 368,
     QC_TOKEN_DAY = 369,
     QC_TOKEN_DEALLOCATE = 370,
     QC_TOKEN_DECIMAL_NUM = 371,
     QC_TOKEN_DECIMAL = 372,
     QC_TOKEN_DECLARE = 373,
     QC_TOKEN_DEFAULT = 374,
     QC_TOKEN_DEFINER = 375,
     QC_TOKEN_DELAYED = 376,
     QC_TOKEN_DELAY_KEY_WRITE = 377,
     QC_TOKEN_DELETE = 378,
     QC_TOKEN_DESC = 379,
     QC_TOKEN_DESCRIBE = 380,
     QC_TOKEN_DES_KEY_FILE = 381,
     QC_TOKEN_DETERMINISTIC = 382,
     QC_TOKEN_DIRECTORY = 383,
     QC_TOKEN_DISABLE = 384,
     QC_TOKEN_DISCARD = 385,
     QC_TOKEN_DISK = 386,
     QC_TOKEN_DISTINCT = 387,
     QC_TOKEN_DIV = 388,
     QC_TOKEN_DOUBLE = 389,
     QC_TOKEN_DO = 390,
     QC_TOKEN_DROP = 391,
     QC_TOKEN_DUAL = 392,
     QC_TOKEN_DUMPFILE = 393,
     QC_TOKEN_DUPLICATE = 394,
     QC_TOKEN_DYNAMIC = 395,
     QC_TOKEN_EACH = 396,
     QC_TOKEN_ELSE = 397,
     QC_TOKEN_ELSEIF = 398,
     QC_TOKEN_ENABLE = 399,
     QC_TOKEN_ENCLOSED = 400,
     QC_TOKEN_END = 401,
     QC_TOKEN_ENDS = 402,
     QC_TOKEN_END_OF_INPUT = 403,
     QC_TOKEN_ENGINES = 404,
     QC_TOKEN_ENGINE = 405,
     QC_TOKEN_ENUM = 406,
     QC_TOKEN_EQ = 407,
     QC_TOKEN_EQUAL = 408,
     QC_TOKEN_ERRORS = 409,
     QC_TOKEN_ESCAPED = 410,
     QC_TOKEN_ESCAPE = 411,
     QC_TOKEN_EVENTS = 412,
     QC_TOKEN_EVENT = 413,
     QC_TOKEN_EVERY = 414,
     QC_TOKEN_EXECUTE = 415,
     QC_TOKEN_EXISTS = 416,
     QC_TOKEN_EXIT = 417,
     QC_TOKEN_EXPANSION = 418,
     QC_TOKEN_EXTENDED = 419,
     QC_TOKEN_EXTENT_SIZE = 420,
     QC_TOKEN_EXTRACT = 421,
     QC_TOKEN_FALSE = 422,
     QC_TOKEN_FAST = 423,
     QC_TOKEN_FAULTS = 424,
     QC_TOKEN_FETCH = 425,
     QC_TOKEN_FILE = 426,
     QC_TOKEN_FIRST = 427,
     QC_TOKEN_FIXED = 428,
     QC_TOKEN_FLOAT_NUM = 429,
     QC_TOKEN_FLOAT = 430,
     QC_TOKEN_FLUSH = 431,
     QC_TOKEN_FORCE = 432,
     QC_TOKEN_FOREIGN = 433,
     QC_TOKEN_FOR = 434,
     QC_TOKEN_FOUND = 435,
     QC_TOKEN_FRAC_SECOND = 436,
     QC_TOKEN_FROM = 437,
     QC_TOKEN_FULL = 438,
     QC_TOKEN_FULLTEXT = 439,
     QC_TOKEN_FUNCTION = 440,
     QC_TOKEN_GE = 441,
     QC_TOKEN_GEOMETRYCOLLECTION = 442,
     QC_TOKEN_GEOMETRY = 443,
     QC_TOKEN_GET_FORMAT = 444,
     QC_TOKEN_GLOBAL = 445,
     QC_TOKEN_GRANT = 446,
     QC_TOKEN_GRANTS = 447,
     QC_TOKEN_GROUP = 448,
     QC_TOKEN_GROUP_CONCAT = 449,
     QC_TOKEN_GT = 450,
     QC_TOKEN_HANDLER = 451,
     QC_TOKEN_HASH = 452,
     QC_TOKEN_HAVING = 453,
     QC_TOKEN_HELP = 454,
     QC_TOKEN_HEX_NUM = 455,
     QC_TOKEN_HIGH_PRIORITY = 456,
     QC_TOKEN_HOST = 457,
     QC_TOKEN_HOSTS = 458,
     QC_TOKEN_HOUR_MICROSECOND = 459,
     QC_TOKEN_HOUR_MINUTE = 460,
     QC_TOKEN_HOUR_SECOND = 461,
     QC_TOKEN_HOUR = 462,
     QC_TOKEN_IDENT = 463,
     QC_TOKEN_IDENTIFIED = 464,
     QC_TOKEN_IDENT_QUOTED = 465,
     QC_TOKEN_IF = 466,
     QC_TOKEN_IGNORE = 467,
     QC_TOKEN_IGNORE_SERVER_IDS = 468,
     QC_TOKEN_IMPORT = 469,
     QC_TOKEN_INDEXES = 470,
     QC_TOKEN_INDEX = 471,
     QC_TOKEN_INFILE = 472,
     QC_TOKEN_INITIAL_SIZE = 473,
     QC_TOKEN_INNER = 474,
     QC_TOKEN_INOUT = 475,
     QC_TOKEN_INSENSITIVE = 476,
     QC_TOKEN_INSERT = 477,
     QC_TOKEN_INSERT_METHOD = 478,
     QC_TOKEN_INSTALL = 479,
     QC_TOKEN_INTERVAL = 480,
     QC_TOKEN_INTO = 481,
     QC_TOKEN_INT = 482,
     QC_TOKEN_INVOKER = 483,
     QC_TOKEN_IN = 484,
     QC_TOKEN_IO = 485,
     QC_TOKEN_IPC = 486,
     QC_TOKEN_IS = 487,
     QC_TOKEN_ISOLATION = 488,
     QC_TOKEN_ISSUER = 489,
     QC_TOKEN_ITERATE = 490,
     QC_TOKEN_JOIN = 491,
     QC_TOKEN_KEYS = 492,
     QC_TOKEN_KEY_BLOCK_SIZE = 493,
     QC_TOKEN_KEY = 494,
     QC_TOKEN_KILL = 495,
     QC_TOKEN_LANGUAGE = 496,
     QC_TOKEN_LAST = 497,
     QC_TOKEN_LE = 498,
     QC_TOKEN_LEADING = 499,
     QC_TOKEN_LEAVES = 500,
     QC_TOKEN_LEAVE = 501,
     QC_TOKEN_LEFT = 502,
     QC_TOKEN_LESS = 503,
     QC_TOKEN_LEVEL = 504,
     QC_TOKEN_LEX_HOSTNAME = 505,
     QC_TOKEN_LIKE = 506,
     QC_TOKEN_LIMIT = 507,
     QC_TOKEN_LINEAR = 508,
     QC_TOKEN_LINES = 509,
     QC_TOKEN_LINESTRING = 510,
     QC_TOKEN_LIST = 511,
     QC_TOKEN_LOAD = 512,
     QC_TOKEN_LOCAL = 513,
     QC_TOKEN_LOCATOR = 514,
     QC_TOKEN_LOCKS = 515,
     QC_TOKEN_LOCK = 516,
     QC_TOKEN_LOGFILE = 517,
     QC_TOKEN_LOGS = 518,
     QC_TOKEN_LONGBLOB = 519,
     QC_TOKEN_LONGTEXT = 520,
     QC_TOKEN_LONG_NUM = 521,
     QC_TOKEN_LONG = 522,
     QC_TOKEN_LOOP = 523,
     QC_TOKEN_LOW_PRIORITY = 524,
     QC_TOKEN_LT = 525,
     QC_TOKEN_MASTER_CONNECT_RETRY = 526,
     QC_TOKEN_MASTER_HOST = 527,
     QC_TOKEN_MASTER_LOG_FILE = 528,
     QC_TOKEN_MASTER_LOG_POS = 529,
     QC_TOKEN_MASTER_PASSWORD = 530,
     QC_TOKEN_MASTER_PORT = 531,
     QC_TOKEN_MASTER_SERVER_ID = 532,
     QC_TOKEN_MASTER_SSL_CAPATH = 533,
     QC_TOKEN_MASTER_SSL_CA = 534,
     QC_TOKEN_MASTER_SSL_CERT = 535,
     QC_TOKEN_MASTER_SSL_CIPHER = 536,
     QC_TOKEN_MASTER_SSL_KEY = 537,
     QC_TOKEN_MASTER_SSL = 538,
     QC_TOKEN_MASTER_SSL_VERIFY_SERVER_CERT = 539,
     QC_TOKEN_MASTER = 540,
     QC_TOKEN_MASTER_USER = 541,
     QC_TOKEN_MASTER_HEARTBEAT_PERIOD = 542,
     QC_TOKEN_MATCH = 543,
     QC_TOKEN_MAX_CONNECTIONS_PER_HOUR = 544,
     QC_TOKEN_MAX_QUERIES_PER_HOUR = 545,
     QC_TOKEN_MAX_ROWS = 546,
     QC_TOKEN_MAX_SIZE = 547,
     QC_TOKEN_MAX = 548,
     QC_TOKEN_MAX_UPDATES_PER_HOUR = 549,
     QC_TOKEN_MAX_USER_CONNECTIONS = 550,
     QC_TOKEN_MAX_VALUE = 551,
     QC_TOKEN_MEDIUMBLOB = 552,
     QC_TOKEN_MEDIUMINT = 553,
     QC_TOKEN_MEDIUMTEXT = 554,
     QC_TOKEN_MEDIUM = 555,
     QC_TOKEN_MEMORY = 556,
     QC_TOKEN_MERGE = 557,
     QC_TOKEN_MESSAGE_TEXT = 558,
     QC_TOKEN_MICROSECOND = 559,
     QC_TOKEN_MIGRATE = 560,
     QC_TOKEN_MINUTE_MICROSECOND = 561,
     QC_TOKEN_MINUTE_SECOND = 562,
     QC_TOKEN_MINUTE = 563,
     QC_TOKEN_MIN_ROWS = 564,
     QC_TOKEN_MIN = 565,
     QC_TOKEN_MODE = 566,
     QC_TOKEN_MODIFIES = 567,
     QC_TOKEN_MODIFY = 568,
     QC_TOKEN_MOD = 569,
     QC_TOKEN_MONTH = 570,
     QC_TOKEN_MULTILINESTRING = 571,
     QC_TOKEN_MULTIPOINT = 572,
     QC_TOKEN_MULTIPOLYGON = 573,
     QC_TOKEN_MUTEX = 574,
     QC_TOKEN_MYSQL_ERRNO = 575,
     QC_TOKEN_NAMES = 576,
     QC_TOKEN_NAME = 577,
     QC_TOKEN_NATIONAL = 578,
     QC_TOKEN_NATURAL = 579,
     QC_TOKEN_NCHAR_STRING = 580,
     QC_TOKEN_NCHAR = 581,
     QC_TOKEN_NDBCLUSTER = 582,
     QC_TOKEN_NE = 583,
     QC_TOKEN_NE_TRIPLE = 584,
     QC_TOKEN_NEG = 585,
     QC_TOKEN_NEW = 586,
     QC_TOKEN_NEXT = 587,
     QC_TOKEN_NODEGROUP = 588,
     QC_TOKEN_NONE = 589,
     QC_TOKEN_NOT2 = 590,
     QC_TOKEN_NOT = 591,
     QC_TOKEN_NOW = 592,
     QC_TOKEN_NO = 593,
     QC_TOKEN_NO_WAIT = 594,
     QC_TOKEN_NO_WRITE_TO_BINLOG = 595,
     QC_TOKEN_NULL = 596,
     QC_TOKEN_NUM = 597,
     QC_TOKEN_NUMERIC = 598,
     QC_TOKEN_NVARCHAR = 599,
     QC_TOKEN_OFFSET = 600,
     QC_TOKEN_OLD_PASSWORD = 601,
     QC_TOKEN_ON = 602,
     QC_TOKEN_ONE_SHOT = 603,
     QC_TOKEN_ONE = 604,
     QC_TOKEN_OPEN = 605,
     QC_TOKEN_OPTIMIZE = 606,
     QC_TOKEN_OPTIONS = 607,
     QC_TOKEN_OPTION = 608,
     QC_TOKEN_OPTIONALLY = 609,
     QC_TOKEN_OR2 = 610,
     QC_TOKEN_ORDER = 611,
     QC_TOKEN_OR_OR = 612,
     QC_TOKEN_OR = 613,
     QC_TOKEN_OUTER = 614,
     QC_TOKEN_OUTFILE = 615,
     QC_TOKEN_OUT = 616,
     QC_TOKEN_OWNER = 617,
     QC_TOKEN_PACK_KEYS = 618,
     QC_TOKEN_PAGE = 619,
     QC_TOKEN_PARAM_MARKER = 620,
     QC_TOKEN_PARSER = 621,
     QC_TOKEN_PARTIAL = 622,
     QC_TOKEN_PARTITIONING = 623,
     QC_TOKEN_PARTITIONS = 624,
     QC_TOKEN_PARTITION = 625,
     QC_TOKEN_PASSWORD = 626,
     QC_TOKEN_PHASE = 627,
     QC_TOKEN_PLUGINS = 628,
     QC_TOKEN_PLUGIN = 629,
     QC_TOKEN_POINT = 630,
     QC_TOKEN_POLYGON = 631,
     QC_TOKEN_PORT = 632,
     QC_TOKEN_POSITION = 633,
     QC_TOKEN_PRECISION = 634,
     QC_TOKEN_PREPARE = 635,
     QC_TOKEN_PRESERVE = 636,
     QC_TOKEN_PREV = 637,
     QC_TOKEN_PRIMARY = 638,
     QC_TOKEN_PRIVILEGES = 639,
     QC_TOKEN_PROCEDURE = 640,
     QC_TOKEN_PROCESS = 641,
     QC_TOKEN_PROCESSLIST = 642,
     QC_TOKEN_PROFILE = 643,
     QC_TOKEN_PROFILES = 644,
     QC_TOKEN_PURGE = 645,
     QC_TOKEN_QUARTER = 646,
     QC_TOKEN_QUERY = 647,
     QC_TOKEN_QUICK = 648,
     QC_TOKEN_RANGE = 649,
     QC_TOKEN_READS = 650,
     QC_TOKEN_READ_ONLY = 651,
     QC_TOKEN_READ = 652,
     QC_TOKEN_READ_WRITE = 653,
     QC_TOKEN_REAL = 654,
     QC_TOKEN_REBUILD = 655,
     QC_TOKEN_RECOVER = 656,
     QC_TOKEN_REDOFILE = 657,
     QC_TOKEN_REDO_BUFFER_SIZE = 658,
     QC_TOKEN_REDUNDANT = 659,
     QC_TOKEN_REFERENCES = 660,
     QC_TOKEN_REGEXP = 661,
     QC_TOKEN_RELAYLOG = 662,
     QC_TOKEN_RELAY_LOG_FILE = 663,
     QC_TOKEN_RELAY_LOG_POS = 664,
     QC_TOKEN_RELAY_THREAD = 665,
     QC_TOKEN_RELEASE = 666,
     QC_TOKEN_RELOAD = 667,
     QC_TOKEN_REMOVE = 668,
     QC_TOKEN_RENAME = 669,
     QC_TOKEN_REORGANIZE = 670,
     QC_TOKEN_REPAIR = 671,
     QC_TOKEN_REPEATABLE = 672,
     QC_TOKEN_REPEAT = 673,
     QC_TOKEN_REPLACE = 674,
     QC_TOKEN_REPLICATION = 675,
     QC_TOKEN_REQUIRE = 676,
     QC_TOKEN_RESET = 677,
     QC_TOKEN_RESIGNAL = 678,
     QC_TOKEN_RESOURCES = 679,
     QC_TOKEN_RESTORE = 680,
     QC_TOKEN_RESTRICT = 681,
     QC_TOKEN_RESUME = 682,
     QC_TOKEN_RETURNS = 683,
     QC_TOKEN_RETURN = 684,
     QC_TOKEN_REVOKE = 685,
     QC_TOKEN_RIGHT = 686,
     QC_TOKEN_ROLLBACK = 687,
     QC_TOKEN_ROLLUP = 688,
     QC_TOKEN_ROUTINE = 689,
     QC_TOKEN_ROWS = 690,
     QC_TOKEN_ROW_FORMAT = 691,
     QC_TOKEN_ROW = 692,
     QC_TOKEN_RTREE = 693,
     QC_TOKEN_SAVEPOINT = 694,
     QC_TOKEN_SCHEDULE = 695,
     QC_TOKEN_SCHEMA_NAME = 696,
     QC_TOKEN_SECOND_MICROSECOND = 697,
     QC_TOKEN_SECOND = 698,
     QC_TOKEN_SECURITY = 699,
     QC_TOKEN_SELECT = 700,
     QC_TOKEN_SENSITIVE = 701,
     QC_TOKEN_SEPARATOR = 702,
     QC_TOKEN_SERIALIZABLE = 703,
     QC_TOKEN_SERIAL = 704,
     QC_TOKEN_SESSION = 705,
     QC_TOKEN_SERVER = 706,
     QC_TOKEN_SERVER_OPTIONS = 707,
     QC_TOKEN_SET = 708,
     QC_TOKEN_SET_VAR = 709,
     QC_TOKEN_SHARE = 710,
     QC_TOKEN_SHIFT_LEFT = 711,
     QC_TOKEN_SHIFT_RIGHT = 712,
     QC_TOKEN_SHOW = 713,
     QC_TOKEN_SHUTDOWN = 714,
     QC_TOKEN_SIGNAL = 715,
     QC_TOKEN_SIGNED = 716,
     QC_TOKEN_SIMPLE = 717,
     QC_TOKEN_SLAVE = 718,
     QC_TOKEN_SMALLINT = 719,
     QC_TOKEN_SNAPSHOT = 720,
     QC_TOKEN_SOCKET = 721,
     QC_TOKEN_SONAME = 722,
     QC_TOKEN_SOUNDS = 723,
     QC_TOKEN_SOURCE = 724,
     QC_TOKEN_SPATIAL = 725,
     QC_TOKEN_SPECIFIC = 726,
     QC_TOKEN_SQLEXCEPTION = 727,
     QC_TOKEN_SQLSTATE = 728,
     QC_TOKEN_SQLWARNING = 729,
     QC_TOKEN_SQL_BIG_RESULT = 730,
     QC_TOKEN_SQL_BUFFER_RESULT = 731,
     QC_TOKEN_SQL_CACHE = 732,
     QC_TOKEN_SQL_CALC_FOUND_ROWS = 733,
     QC_TOKEN_SQL_NO_CACHE = 734,
     QC_TOKEN_SQL_SMALL_RESULT = 735,
     QC_TOKEN_SQL = 736,
     QC_TOKEN_SQL_THREAD = 737,
     QC_TOKEN_SSL = 738,
     QC_TOKEN_STARTING = 739,
     QC_TOKEN_STARTS = 740,
     QC_TOKEN_START = 741,
     QC_TOKEN_STATUS = 742,
     QC_TOKEN_STDDEV_SAMP = 743,
     QC_TOKEN_STD = 744,
     QC_TOKEN_STOP = 745,
     QC_TOKEN_STORAGE = 746,
     QC_TOKEN_STRAIGHT_JOIN = 747,
     QC_TOKEN_STRING = 748,
     QC_TOKEN_SUBCLASS_ORIGIN = 749,
     QC_TOKEN_SUBDATE = 750,
     QC_TOKEN_SUBJECT = 751,
     QC_TOKEN_SUBPARTITIONS = 752,
     QC_TOKEN_SUBPARTITION = 753,
     QC_TOKEN_SUBSTRING = 754,
     QC_TOKEN_SUM = 755,
     QC_TOKEN_SUPER = 756,
     QC_TOKEN_SUSPEND = 757,
     QC_TOKEN_SWAPS = 758,
     QC_TOKEN_SWITCHES = 759,
     QC_TOKEN_SYSDATE = 760,
     QC_TOKEN_TABLES = 761,
     QC_TOKEN_TABLESPACE = 762,
     QC_TOKEN_TABLE_REF_PRIORITY = 763,
     QC_TOKEN_TABLE = 764,
     QC_TOKEN_TABLE_CHECKSUM = 765,
     QC_TOKEN_TABLE_NAME = 766,
     QC_TOKEN_TEMPORARY = 767,
     QC_TOKEN_TEMPTABLE = 768,
     QC_TOKEN_TERMINATED = 769,
     QC_TOKEN_TEXT_STRING = 770,
     QC_TOKEN_TEXT = 771,
     QC_TOKEN_THAN = 772,
     QC_TOKEN_THEN = 773,
     QC_TOKEN_TIMESTAMP = 774,
     QC_TOKEN_TIMESTAMP_ADD = 775,
     QC_TOKEN_TIMESTAMP_DIFF = 776,
     QC_TOKEN_TIME = 777,
     QC_TOKEN_TINYBLOB = 778,
     QC_TOKEN_TINYINT = 779,
     QC_TOKEN_TINYTEXT = 780,
     QC_TOKEN_TO = 781,
     QC_TOKEN_TRAILING = 782,
     QC_TOKEN_TRANSACTION = 783,
     QC_TOKEN_TRIGGERS = 784,
     QC_TOKEN_TRIGGER = 785,
     QC_TOKEN_TRIM = 786,
     QC_TOKEN_TRUE = 787,
     QC_TOKEN_TRUNCATE = 788,
     QC_TOKEN_TYPES = 789,
     QC_TOKEN_TYPE = 790,
     QC_TOKEN_UDF_RETURNS = 791,
     QC_TOKEN_ULONGLONG_NUM = 792,
     QC_TOKEN_UNCOMMITTED = 793,
     QC_TOKEN_UNDEFINED = 794,
     QC_TOKEN_UNDERSCORE_CHARSET = 795,
     QC_TOKEN_UNDOFILE = 796,
     QC_TOKEN_UNDO_BUFFER_SIZE = 797,
     QC_TOKEN_UNDO = 798,
     QC_TOKEN_UNICODE = 799,
     QC_TOKEN_UNINSTALL = 800,
     QC_TOKEN_UNION = 801,
     QC_TOKEN_UNIQUE = 802,
     QC_TOKEN_UNKNOWN = 803,
     QC_TOKEN_UNLOCK = 804,
     QC_TOKEN_UNSIGNED = 805,
     QC_TOKEN_UNTIL = 806,
     QC_TOKEN_UPDATE = 807,
     QC_TOKEN_UPGRADE = 808,
     QC_TOKEN_USAGE = 809,
     QC_TOKEN_USER = 810,
     QC_TOKEN_USE_FRM = 811,
     QC_TOKEN_USE = 812,
     QC_TOKEN_USING = 813,
     QC_TOKEN_UTC_DATE = 814,
     QC_TOKEN_UTC_TIMESTAMP = 815,
     QC_TOKEN_UTC_TIME = 816,
     QC_TOKEN_VALUES = 817,
     QC_TOKEN_VALUE = 818,
     QC_TOKEN_VARBINARY = 819,
     QC_TOKEN_VARCHAR = 820,
     QC_TOKEN_VARIABLES = 821,
     QC_TOKEN_VARIANCE = 822,
     QC_TOKEN_VARYING = 823,
     QC_TOKEN_VAR_SAMP = 824,
     QC_TOKEN_VIEW = 825,
     QC_TOKEN_WAIT = 826,
     QC_TOKEN_WARNINGS = 827,
     QC_TOKEN_WEEK = 828,
     QC_TOKEN_WHEN = 829,
     QC_TOKEN_WHERE = 830,
     QC_TOKEN_WHILE = 831,
     QC_TOKEN_WITH = 832,
     QC_TOKEN_WITH_CUBE = 833,
     QC_TOKEN_WITH_ROLLUP = 834,
     QC_TOKEN_WORK = 835,
     QC_TOKEN_WRAPPER = 836,
     QC_TOKEN_WRITE = 837,
     QC_TOKEN_X509 = 838,
     QC_TOKEN_XA = 839,
     QC_TOKEN_XML = 840,
     QC_TOKEN_XOR = 841,
     QC_TOKEN_YEAR_MONTH = 842,
     QC_TOKEN_YEAR = 843,
     QC_TOKEN_ZEROFILL = 844,
     QC_TOKEN_CLIENT_FLAG = 845,
     QC_TOKEN_GLOBAL_VAR = 846,
     QC_TOKEN_SESSION_VAR = 847,
     QC_TOKEN_BRACKET_OPEN = 848,
     QC_TOKEN_BRACKET_CLOSE = 849,
     QC_TOKEN_PLUS = 850,
     QC_TOKEN_MINUS = 851,
     QC_TOKEN_STAR = 852,
     QC_TOKEN_COMMA = 853,
     QC_TOKEN_DOT = 854,
     QC_TOKEN_SEMICOLON = 855,
     QC_TOKEN_NO_MORE = 856,
     QC_TOKEN_IDENTIFIER = 857,
     QC_TOKEN_INTNUM = 858,
     QC_TOKEN_FLOATNUM = 859,
     QC_TOKEN_ASSIGN_TO_VAR = 860,
     QC_TOKEN_TILDE = 861
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 40 "mysqlnd_query_parser.grammar"

  zval zv;
  const char * kn; /* keyword_name */
  _ms_smart_type * comment;



/* Line 1676 of yacc.c  */
#line 666 "mysqlnd_query_parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




