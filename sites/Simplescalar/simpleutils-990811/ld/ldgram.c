/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 22 "ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "bfd.h"
#include "sysdep.h"
#include "bfdlink.h"
#include "ld.h"    
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldemul.h"
#include "ldfile.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldctor.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;

lang_memory_region_type *region;

struct wildcard_spec current_file;
boolean ldgram_want_filename = true;
boolean had_script = false;
boolean force_make_executable = false;

boolean ldgram_in_script = false;
boolean ldgram_had_equals = false;
boolean ldgram_had_keep = false;
char *ldgram_vers_current_lang = NULL;

#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;


/* Line 268 of yacc.c  */
#line 119 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     NAME = 259,
     LNAME = 260,
     OREQ = 261,
     ANDEQ = 262,
     RSHIFTEQ = 263,
     LSHIFTEQ = 264,
     DIVEQ = 265,
     MULTEQ = 266,
     MINUSEQ = 267,
     PLUSEQ = 268,
     OROR = 269,
     ANDAND = 270,
     NE = 271,
     EQ = 272,
     GE = 273,
     LE = 274,
     RSHIFT = 275,
     LSHIFT = 276,
     UNARY = 277,
     END = 278,
     ALIGN_K = 279,
     BLOCK = 280,
     BIND = 281,
     QUAD = 282,
     SQUAD = 283,
     LONG = 284,
     SHORT = 285,
     BYTE = 286,
     SECTIONS = 287,
     PHDRS = 288,
     SORT = 289,
     SIZEOF_HEADERS = 290,
     OUTPUT_FORMAT = 291,
     FORCE_COMMON_ALLOCATION = 292,
     OUTPUT_ARCH = 293,
     INCLUDE = 294,
     MEMORY = 295,
     DEFSYMEND = 296,
     NOLOAD = 297,
     DSECT = 298,
     COPY = 299,
     INFO = 300,
     OVERLAY = 301,
     DEFINED = 302,
     TARGET_K = 303,
     SEARCH_DIR = 304,
     MAP = 305,
     ENTRY = 306,
     NEXT = 307,
     SIZEOF = 308,
     ADDR = 309,
     LOADADDR = 310,
     MAX_K = 311,
     MIN_K = 312,
     STARTUP = 313,
     HLL = 314,
     SYSLIB = 315,
     FLOAT = 316,
     NOFLOAT = 317,
     NOCROSSREFS = 318,
     ORIGIN = 319,
     FILL = 320,
     LENGTH = 321,
     CREATE_OBJECT_SYMBOLS = 322,
     INPUT = 323,
     GROUP = 324,
     OUTPUT = 325,
     CONSTRUCTORS = 326,
     ALIGNMOD = 327,
     AT = 328,
     PROVIDE = 329,
     CHIP = 330,
     LIST = 331,
     SECT = 332,
     ABSOLUTE = 333,
     LOAD = 334,
     NEWLINE = 335,
     ENDWORD = 336,
     ORDER = 337,
     NAMEWORD = 338,
     ASSERT_K = 339,
     FORMAT = 340,
     PUBLIC = 341,
     BASE = 342,
     ALIAS = 343,
     TRUNCATE = 344,
     REL = 345,
     INPUT_SCRIPT = 346,
     INPUT_MRI_SCRIPT = 347,
     INPUT_DEFSYM = 348,
     CASE = 349,
     EXTERN = 350,
     START = 351,
     VERS_TAG = 352,
     VERS_IDENTIFIER = 353,
     GLOBAL = 354,
     LOCAL = 355,
     VERSIONK = 356,
     INPUT_VERSION_SCRIPT = 357,
     KEEP = 358,
     EXCLUDE_FILE = 359
   };
#endif
/* Tokens.  */
#define INT 258
#define NAME 259
#define LNAME 260
#define OREQ 261
#define ANDEQ 262
#define RSHIFTEQ 263
#define LSHIFTEQ 264
#define DIVEQ 265
#define MULTEQ 266
#define MINUSEQ 267
#define PLUSEQ 268
#define OROR 269
#define ANDAND 270
#define NE 271
#define EQ 272
#define GE 273
#define LE 274
#define RSHIFT 275
#define LSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define SQUAD 283
#define LONG 284
#define SHORT 285
#define BYTE 286
#define SECTIONS 287
#define PHDRS 288
#define SORT 289
#define SIZEOF_HEADERS 290
#define OUTPUT_FORMAT 291
#define FORCE_COMMON_ALLOCATION 292
#define OUTPUT_ARCH 293
#define INCLUDE 294
#define MEMORY 295
#define DEFSYMEND 296
#define NOLOAD 297
#define DSECT 298
#define COPY 299
#define INFO 300
#define OVERLAY 301
#define DEFINED 302
#define TARGET_K 303
#define SEARCH_DIR 304
#define MAP 305
#define ENTRY 306
#define NEXT 307
#define SIZEOF 308
#define ADDR 309
#define LOADADDR 310
#define MAX_K 311
#define MIN_K 312
#define STARTUP 313
#define HLL 314
#define SYSLIB 315
#define FLOAT 316
#define NOFLOAT 317
#define NOCROSSREFS 318
#define ORIGIN 319
#define FILL 320
#define LENGTH 321
#define CREATE_OBJECT_SYMBOLS 322
#define INPUT 323
#define GROUP 324
#define OUTPUT 325
#define CONSTRUCTORS 326
#define ALIGNMOD 327
#define AT 328
#define PROVIDE 329
#define CHIP 330
#define LIST 331
#define SECT 332
#define ABSOLUTE 333
#define LOAD 334
#define NEWLINE 335
#define ENDWORD 336
#define ORDER 337
#define NAMEWORD 338
#define ASSERT_K 339
#define FORMAT 340
#define PUBLIC 341
#define BASE 342
#define ALIAS 343
#define TRUNCATE 344
#define REL 345
#define INPUT_SCRIPT 346
#define INPUT_MRI_SCRIPT 347
#define INPUT_DEFSYM 348
#define CASE 349
#define EXTERN 350
#define START 351
#define VERS_TAG 352
#define VERS_IDENTIFIER 353
#define GLOBAL 354
#define LOCAL 355
#define VERSIONK 356
#define INPUT_VERSION_SCRIPT 357
#define KEEP 358
#define EXCLUDE_FILE 359




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 68 "ldgram.y"

  bfd_vma integer;
  char *name;
  const char *cname;
  struct wildcard_spec wildcard;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      boolean filehdr;
      boolean phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;



/* Line 293 of yacc.c  */
#line 386 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 398 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  287
/* YYNRULES -- Number of states.  */
#define YYNSTATES  582

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   359

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,     2,     2,     2,    34,    21,     2,
      37,   123,    32,    30,   121,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   122,
      24,     6,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   124,     2,   125,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    19,    50,   127,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    17,    18,    23,
      24,    27,    31,    32,    35,    40,    42,    44,    47,    49,
      54,    59,    63,    66,    71,    75,    80,    85,    90,    95,
     100,   103,   106,   109,   114,   119,   122,   125,   128,   131,
     132,   138,   141,   142,   146,   149,   150,   152,   156,   158,
     162,   163,   165,   169,   171,   174,   178,   179,   182,   185,
     186,   188,   190,   192,   194,   196,   198,   200,   202,   204,
     206,   211,   216,   221,   226,   235,   240,   242,   247,   248,
     254,   259,   260,   266,   271,   276,   278,   282,   285,   287,
     291,   294,   299,   302,   305,   306,   311,   314,   316,   318,
     320,   322,   328,   333,   342,   344,   348,   350,   351,   356,
     357,   363,   365,   366,   372,   375,   377,   379,   381,   386,
     388,   393,   398,   401,   403,   404,   406,   408,   410,   412,
     414,   416,   419,   420,   422,   424,   426,   428,   430,   432,
     434,   436,   438,   440,   444,   448,   455,   457,   458,   464,
     467,   471,   472,   473,   481,   485,   489,   490,   494,   496,
     499,   501,   504,   509,   514,   518,   522,   524,   529,   533,
     534,   536,   538,   539,   542,   546,   547,   550,   553,   557,
     562,   565,   568,   571,   575,   579,   583,   587,   591,   595,
     599,   603,   607,   611,   615,   619,   623,   627,   631,   635,
     641,   645,   649,   654,   656,   658,   663,   668,   673,   678,
     683,   688,   690,   697,   704,   711,   716,   717,   718,   719,
     720,   721,   722,   738,   739,   740,   741,   742,   743,   760,
     761,   762,   770,   772,   774,   776,   778,   780,   784,   785,
     788,   792,   795,   802,   813,   816,   818,   819,   821,   824,
     825,   826,   830,   831,   832,   833,   834,   846,   851,   852,
     855,   856,   857,   864,   866,   867,   871,   877,   878,   882,
     883,   886,   887,   893,   895,   898,   904,   911,   913,   916,
     917,   920,   925,   930,   939,   941,   945,   946
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     129,     0,    -1,   107,   143,    -1,   108,   133,    -1,   118,
     222,    -1,   109,   131,    -1,     4,    -1,    -1,   132,     4,
       6,   188,    -1,    -1,   134,   135,    -1,   135,   136,    96,
      -1,    -1,    91,   188,    -1,    91,   188,   121,   188,    -1,
       4,    -1,    92,    -1,    98,   138,    -1,    97,    -1,   102,
       4,     6,   188,    -1,   102,     4,   121,   188,    -1,   102,
       4,   188,    -1,   101,     4,    -1,    93,     4,   121,   188,
      -1,    93,     4,   188,    -1,    93,     4,     6,   188,    -1,
      38,     4,     6,   188,    -1,    38,     4,   121,   188,    -1,
      88,     4,     6,   188,    -1,    88,     4,   121,   188,    -1,
      94,   140,    -1,    95,   139,    -1,    99,     4,    -1,   104,
       4,   121,     4,    -1,   104,     4,   121,     3,    -1,   103,
     188,    -1,   105,     3,    -1,   110,   141,    -1,   111,   142,
      -1,    -1,    55,   130,   137,   135,    36,    -1,   112,     4,
      -1,    -1,   138,   121,     4,    -1,   138,     4,    -1,    -1,
       4,    -1,   139,   121,     4,    -1,     4,    -1,   140,   121,
       4,    -1,    -1,     4,    -1,   141,   121,     4,    -1,     4,
      -1,   142,     4,    -1,   142,   121,     4,    -1,    -1,   144,
     145,    -1,   145,   146,    -1,    -1,   170,    -1,   150,    -1,
     214,    -1,   179,    -1,   180,    -1,   182,    -1,   184,    -1,
     152,    -1,   224,    -1,   122,    -1,    64,    37,     4,   123,
      -1,    65,    37,   130,   123,    -1,    86,    37,   130,   123,
      -1,    52,    37,     4,   123,    -1,    52,    37,     4,   121,
       4,   121,     4,   123,    -1,    54,    37,     4,   123,    -1,
      53,    -1,    84,    37,   149,   123,    -1,    -1,    85,   147,
      37,   149,   123,    -1,    66,    37,   130,   123,    -1,    -1,
      55,   130,   148,   145,    36,    -1,    79,    37,   185,   123,
      -1,   111,    37,   142,   123,    -1,     4,    -1,   149,   121,
       4,    -1,   149,     4,    -1,     5,    -1,   149,   121,     5,
      -1,   149,     5,    -1,    46,    49,   151,    50,    -1,   151,
     190,    -1,   151,   152,    -1,    -1,    67,    37,     4,   123,
      -1,   168,   167,    -1,     4,    -1,    32,    -1,    15,    -1,
     153,    -1,   120,    37,   153,   123,   153,    -1,    48,    37,
     153,   123,    -1,    48,    37,   120,    37,   153,   123,   153,
     123,    -1,   154,    -1,   155,   169,   154,    -1,     4,    -1,
      -1,   124,   157,   155,   125,    -1,    -1,   154,   158,    37,
     155,   123,    -1,   156,    -1,    -1,   119,    37,   160,   156,
     123,    -1,   168,   167,    -1,    83,    -1,   122,    -1,    87,
      -1,    48,    37,    87,   123,    -1,   159,    -1,   164,    37,
     186,   123,    -1,    81,    37,   186,   123,    -1,   162,   161,
      -1,   161,    -1,    -1,   162,    -1,    41,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,     6,   186,    -1,    -1,
      14,    -1,    13,    -1,    12,    -1,    11,    -1,    10,    -1,
       9,    -1,     8,    -1,     7,    -1,   122,    -1,   121,    -1,
       4,     6,   186,    -1,     4,   166,   186,    -1,    90,    37,
       4,     6,   186,   123,    -1,   121,    -1,    -1,    56,    49,
     172,   171,    50,    -1,   171,   172,    -1,   171,   121,   172,
      -1,    -1,    -1,     4,   173,   176,    16,   174,   169,   175,
      -1,    80,     6,   186,    -1,    82,     6,   186,    -1,    -1,
      37,   177,   123,    -1,   178,    -1,   177,   178,    -1,     4,
      -1,   126,     4,    -1,    74,    37,   130,   123,    -1,    75,
      37,   181,   123,    -1,    75,    37,   123,    -1,   181,   169,
     130,    -1,   130,    -1,    76,    37,   183,   123,    -1,   183,
     169,   130,    -1,    -1,    77,    -1,    78,    -1,    -1,     4,
     185,    -1,     4,   121,   185,    -1,    -1,   187,   188,    -1,
      31,   188,    -1,    37,   188,   123,    -1,    68,    37,   188,
     123,    -1,   126,   188,    -1,    30,   188,    -1,   127,   188,
      -1,   188,    32,   188,    -1,   188,    33,   188,    -1,   188,
      34,   188,    -1,   188,    30,   188,    -1,   188,    31,   188,
      -1,   188,    29,   188,    -1,   188,    28,   188,    -1,   188,
      23,   188,    -1,   188,    22,   188,    -1,   188,    27,   188,
      -1,   188,    26,   188,    -1,   188,    24,   188,    -1,   188,
      25,   188,    -1,   188,    21,   188,    -1,   188,    20,   188,
      -1,   188,    19,   188,    -1,   188,    15,   188,    16,   188,
      -1,   188,    18,   188,    -1,   188,    17,   188,    -1,    63,
      37,     4,   123,    -1,     3,    -1,    51,    -1,    69,    37,
       4,   123,    -1,    70,    37,     4,   123,    -1,    71,    37,
       4,   123,    -1,    94,    37,   188,   123,    -1,    38,    37,
     188,   123,    -1,    39,    37,   188,   123,    -1,     4,    -1,
      72,    37,   188,   121,   188,   123,    -1,    73,    37,   188,
     121,   188,   123,    -1,   100,    37,   188,   121,     4,   123,
      -1,    89,    37,   188,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,   191,   205,   189,   192,    49,   193,   163,
      50,   194,   208,   209,   165,   195,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    62,   196,   206,   207,   189,   197,    49,
     198,   210,    50,   199,   208,   209,   165,   200,   169,    -1,
      -1,    -1,    85,   201,   205,   202,    49,   151,    50,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,
      37,   203,   123,    -1,    -1,    37,   123,    -1,   188,   204,
      16,    -1,   204,    16,    -1,    40,    37,   188,   123,   204,
      16,    -1,    40,    37,   188,   123,    39,    37,   188,   123,
     204,    16,    -1,   188,    16,    -1,    16,    -1,    -1,    79,
      -1,    25,     4,    -1,    -1,    -1,   209,    16,     4,    -1,
      -1,    -1,    -1,    -1,   210,     4,   211,    49,   163,    50,
     212,   209,   165,   213,   169,    -1,    47,    49,   215,    50,
      -1,    -1,   215,   216,    -1,    -1,    -1,     4,   217,   219,
     220,   218,   122,    -1,   188,    -1,    -1,     4,   221,   220,
      -1,    89,    37,   188,   123,   220,    -1,    -1,    37,   188,
     123,    -1,    -1,   223,   226,    -1,    -1,   225,   117,    49,
     226,    50,    -1,   227,    -1,   226,   227,    -1,   113,    49,
     229,    50,   122,    -1,   113,    49,   229,    50,   228,   122,
      -1,   113,    -1,   228,   113,    -1,    -1,   230,   122,    -1,
     115,    16,   230,   122,    -1,   116,    16,   230,   122,    -1,
     115,    16,   230,   122,   116,    16,   230,   122,    -1,   114,
      -1,   230,   122,   114,    -1,    -1,   111,     4,    49,   231,
     230,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   151,   151,   152,   153,   154,   158,   162,   162,   171,
     171,   184,   185,   189,   190,   191,   194,   197,   198,   199,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   219,
     221,   222,   223,   225,   227,   229,   231,   233,   234,   236,
     235,   237,   239,   243,   244,   245,   249,   251,   255,   257,
     262,   263,   264,   268,   270,   272,   277,   277,   288,   289,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   307,   309,   311,   314,   316,   318,   320,   322,   321,
     325,   328,   327,   329,   333,   337,   340,   343,   346,   349,
     352,   358,   362,   363,   364,   368,   370,   376,   380,   384,
     391,   397,   403,   409,   419,   426,   436,   442,   441,   448,
     447,   458,   460,   459,   466,   467,   471,   472,   477,   482,
     483,   488,   499,   500,   503,   505,   509,   511,   513,   515,
     517,   522,   529,   535,   537,   539,   541,   543,   545,   547,
     549,   554,   554,   559,   563,   571,   579,   579,   583,   587,
     588,   589,   594,   593,   599,   607,   617,   618,   622,   623,
     627,   629,   634,   639,   640,   645,   647,   653,   655,   657,
     661,   663,   669,   672,   681,   692,   692,   698,   700,   702,
     704,   706,   708,   711,   713,   715,   717,   719,   721,   723,
     725,   727,   729,   731,   733,   735,   737,   739,   741,   743,
     745,   747,   749,   751,   753,   756,   758,   760,   762,   764,
     766,   768,   770,   772,   774,   780,   781,   784,   786,   788,
     794,   796,   784,   802,   804,   806,   811,   813,   801,   822,
     824,   822,   832,   833,   834,   835,   836,   840,   841,   842,
     846,   847,   852,   853,   858,   859,   864,   865,   870,   872,
     877,   880,   893,   897,   902,   904,   895,   912,   915,   917,
     921,   922,   921,   931,   962,   965,   977,   986,   989,   998,
     998,  1012,  1012,  1022,  1023,  1027,  1031,  1038,  1042,  1050,
    1053,  1057,  1061,  1065,  1072,  1076,  1081,  1080
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NAME", "LNAME", "'='", "OREQ",
  "ANDEQ", "RSHIFTEQ", "LSHIFTEQ", "DIVEQ", "MULTEQ", "MINUSEQ", "PLUSEQ",
  "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "NE", "EQ", "'<'",
  "'>'", "GE", "LE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND", "QUAD", "SQUAD",
  "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "SORT", "'{'", "'}'",
  "SIZEOF_HEADERS", "OUTPUT_FORMAT", "FORCE_COMMON_ALLOCATION",
  "OUTPUT_ARCH", "INCLUDE", "MEMORY", "DEFSYMEND", "NOLOAD", "DSECT",
  "COPY", "INFO", "OVERLAY", "DEFINED", "TARGET_K", "SEARCH_DIR", "MAP",
  "ENTRY", "NEXT", "SIZEOF", "ADDR", "LOADADDR", "MAX_K", "MIN_K",
  "STARTUP", "HLL", "SYSLIB", "FLOAT", "NOFLOAT", "NOCROSSREFS", "ORIGIN",
  "FILL", "LENGTH", "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT",
  "CONSTRUCTORS", "ALIGNMOD", "AT", "PROVIDE", "CHIP", "LIST", "SECT",
  "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD", "ORDER", "NAMEWORD",
  "ASSERT_K", "FORMAT", "PUBLIC", "BASE", "ALIAS", "TRUNCATE", "REL",
  "INPUT_SCRIPT", "INPUT_MRI_SCRIPT", "INPUT_DEFSYM", "CASE", "EXTERN",
  "START", "VERS_TAG", "VERS_IDENTIFIER", "GLOBAL", "LOCAL", "VERSIONK",
  "INPUT_VERSION_SCRIPT", "KEEP", "EXCLUDE_FILE", "','", "';'", "')'",
  "'['", "']'", "'!'", "'~'", "$accept", "file", "filename", "defsym_expr",
  "$@1", "mri_script_file", "$@2", "mri_script_lines",
  "mri_script_command", "$@3", "ordernamelist", "mri_load_name_list",
  "mri_abs_name_list", "casesymlist", "extern_name_list", "script_file",
  "$@4", "ifile_list", "ifile_p1", "$@5", "$@6", "input_list", "sections",
  "sec_or_group_p1", "statement_anywhere", "wildcard_name",
  "wildcard_spec", "file_NAME_list", "input_section_spec_no_keep", "$@7",
  "$@8", "input_section_spec", "$@9", "statement", "statement_list",
  "statement_list_opt", "length", "fill_opt", "assign_op", "end",
  "assignment", "opt_comma", "memory", "memory_spec_list", "memory_spec",
  "$@10", "origin_spec", "length_spec", "attributes_opt",
  "attributes_list", "attributes_string", "startup", "high_level_library",
  "high_level_library_NAME_list", "low_level_library",
  "low_level_library_NAME_list", "floating_point_support",
  "nocrossref_list", "mustbe_exp", "$@11", "exp", "opt_at", "section",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "type", "atype", "opt_exp_with_type",
  "opt_exp_without_type", "opt_nocrossrefs", "memspec_opt", "phdr_opt",
  "overlay_section", "$@24", "$@25", "$@26", "phdrs", "phdr_list", "phdr",
  "$@27", "$@28", "phdr_type", "phdr_qualifiers", "phdr_val",
  "version_script_file", "$@29", "version", "$@30", "vers_nodes",
  "vers_node", "verdep", "vers_tag", "vers_defns", "@31", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    61,   261,   262,   263,
     264,   265,   266,   267,   268,    63,    58,   269,   270,   124,
      94,    38,   271,   272,    60,    62,   273,   274,   275,   276,
      43,    45,    42,    47,    37,   277,   278,    40,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   123,
     125,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,    44,    59,    41,    91,    93,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   129,   129,   129,   129,   130,   132,   131,   134,
     133,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     136,   136,   136,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   142,   142,   142,   144,   143,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   147,   146,
     146,   148,   146,   146,   146,   149,   149,   149,   149,   149,
     149,   150,   151,   151,   151,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   155,   155,   156,   157,   156,   158,
     156,   159,   160,   159,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   162,   163,   163,   164,   164,   164,   164,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   168,   168,   168,   169,   169,   170,   171,
     171,   171,   173,   172,   174,   175,   176,   176,   177,   177,
     178,   178,   179,   180,   180,   181,   181,   182,   183,   183,
     184,   184,   185,   185,   185,   187,   186,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   189,   189,   191,   192,   193,
     194,   195,   190,   196,   197,   198,   199,   200,   190,   201,
     202,   190,   203,   203,   203,   203,   203,   204,   204,   204,
     205,   205,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   211,   212,   213,   210,   214,   215,   215,
     217,   218,   216,   219,   220,   220,   220,   221,   221,   223,
     222,   225,   224,   226,   226,   227,   227,   228,   228,   229,
     229,   229,   229,   229,   230,   230,   231,   230
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     0,     4,     0,
       2,     3,     0,     2,     4,     1,     1,     2,     1,     4,
       4,     3,     2,     4,     3,     4,     4,     4,     4,     4,
       2,     2,     2,     4,     4,     2,     2,     2,     2,     0,
       5,     2,     0,     3,     2,     0,     1,     3,     1,     3,
       0,     1,     3,     1,     2,     3,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     8,     4,     1,     4,     0,     5,
       4,     0,     5,     4,     4,     1,     3,     2,     1,     3,
       2,     4,     2,     2,     0,     4,     2,     1,     1,     1,
       1,     5,     4,     8,     1,     3,     1,     0,     4,     0,
       5,     1,     0,     5,     2,     1,     1,     1,     4,     1,
       4,     4,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     6,     1,     0,     5,     2,
       3,     0,     0,     7,     3,     3,     0,     3,     1,     2,
       1,     2,     4,     4,     3,     3,     1,     4,     3,     0,
       1,     1,     0,     2,     3,     0,     2,     2,     3,     4,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     1,     1,     4,     4,     4,     4,     4,
       4,     1,     6,     6,     6,     4,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,     0,
       0,     7,     1,     1,     1,     1,     1,     3,     0,     2,
       3,     2,     6,    10,     2,     1,     0,     1,     2,     0,
       0,     3,     0,     0,     0,     0,    11,     4,     0,     2,
       0,     0,     6,     1,     0,     3,     5,     0,     3,     0,
       2,     0,     5,     1,     2,     5,     6,     1,     2,     0,
       2,     4,     4,     8,     1,     3,     0,     6
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    56,     9,     7,   269,     0,     2,    59,     3,    12,
       5,     0,     4,     0,     1,    57,    10,     0,     0,   270,
     273,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   171,     0,     0,
      78,     0,     0,     0,    69,    58,    61,    67,     0,    60,
      63,    64,    65,    66,    62,    68,     0,    15,     0,     0,
       0,     0,    16,     0,     0,     0,    18,    45,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,   279,
     274,   175,   140,   139,   138,   137,   136,   135,   134,   133,
     175,    94,   258,     0,     0,     6,    81,     0,     0,     0,
       0,     0,     0,     0,   169,   172,     0,     0,     0,     0,
       0,   142,   141,    96,     0,     0,    39,     0,   203,   211,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    48,
      30,    46,    31,    17,    32,    22,     0,    35,     0,    36,
      51,    37,    53,    38,    41,    11,     8,     0,   284,     0,
       0,     0,     0,   143,     0,   144,     0,     0,     0,     0,
      59,   152,   151,     0,     0,     0,     0,     0,   164,   166,
     147,   147,   172,     0,    85,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     0,   181,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    44,     0,
       0,     0,    21,     0,     0,    54,     0,     0,     0,     0,
       0,   280,   176,   217,    91,   223,   229,    93,    92,   260,
     257,   259,     0,    73,    75,   271,   156,     0,    70,    71,
      80,    95,   162,   146,   163,     0,   167,     0,   172,   173,
      83,    87,    90,     0,    77,     0,    72,   175,    84,     0,
      26,    27,    42,    28,    29,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   200,
     198,   197,   196,   191,   190,   194,   195,   193,   192,   189,
     188,   186,   187,   183,   184,   185,    14,    25,    23,    49,
      47,    43,    19,    20,    34,    33,    52,    55,   286,     0,
       0,   277,   275,     0,   285,   238,     0,   238,     0,     0,
      82,     0,     0,   148,     0,   149,   165,   168,   174,    86,
      89,    79,     0,   272,    40,   209,   210,   202,   179,   205,
     206,   207,     0,     0,   208,     0,     0,     0,   281,   282,
     278,   276,     0,     0,   238,     0,   216,   245,     0,   246,
     230,   263,   264,     0,   160,     0,     0,   158,     0,   150,
     145,     0,     0,     0,   199,     0,     0,   232,   233,   234,
     235,   236,   239,     0,     0,     0,     0,   241,     0,   218,
     244,   247,   216,     0,   267,     0,   261,     0,   161,   157,
     159,     0,   147,   212,   213,   214,   287,     0,     0,   237,
       0,   240,     0,     0,   224,    94,     0,   264,     0,     0,
      74,   175,     0,     0,   238,     0,   219,     0,     0,     0,
     265,     0,   262,   154,     0,   153,   283,     0,     0,   215,
     124,   225,   231,   268,   264,   175,     0,   242,   106,    99,
      98,   126,   127,   128,   129,   130,     0,     0,   115,   117,
       0,     0,   116,   107,   100,   109,   111,   119,   123,   125,
       0,     0,     0,   252,   266,   155,     0,     0,   175,   112,
       0,     0,     0,   122,   220,   175,   114,     0,   238,    97,
       0,     0,     0,     0,     0,     0,     0,   104,   147,     0,
     249,     0,   253,   226,     0,   118,     0,   102,   121,    97,
       0,     0,     0,   108,     0,   147,     0,   250,   120,     0,
     249,   243,     0,   113,   101,   105,   110,   248,   132,   124,
     250,     0,   175,     0,   221,     0,   132,     0,   131,   251,
     147,   254,   227,   103,   222,   250,   147,   132,   228,   255,
     147,   256
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    96,    10,    11,     8,     9,    16,    77,   194,
     143,   142,   140,   151,   153,     6,     7,    15,    45,   107,
     170,   186,    46,   166,    47,   494,   495,   528,   496,   511,
     512,   497,   524,   498,   499,   500,   501,   564,    90,   113,
      48,   544,    49,   267,   172,   266,   432,   465,   352,   396,
     397,    50,    51,   180,    52,   181,    53,   183,   163,   164,
     199,   419,   258,   345,   443,   470,   530,   570,   346,   457,
     503,   550,   576,   347,   423,   413,   385,   386,   389,   422,
     547,   558,   517,   549,   575,   580,    54,   167,   261,   348,
     449,   392,   426,   447,    12,    13,    55,    56,    19,    20,
     343,   161,   162,   377
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -534
static const yytype_int16 yypact[] =
{
      97,  -534,  -534,  -534,  -534,    41,  -534,  -534,  -534,  -534,
    -534,    75,  -534,   -26,  -534,   597,   514,    86,    46,   -26,
    -534,   488,    74,    79,    71,  -534,   115,   118,   128,   146,
     149,   154,   157,   170,   171,   176,  -534,  -534,   177,   188,
    -534,   191,   192,   202,  -534,  -534,  -534,  -534,   -21,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,   147,  -534,   269,   118,
     270,   504,  -534,   272,   273,   274,  -534,  -534,   275,   276,
     277,   504,   280,   289,   290,   293,   296,   197,   504,    85,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,   297,   298,  -534,  -534,   300,   301,   118,
     118,   302,   118,    15,  -534,   303,    59,   271,   118,   305,
     293,  -534,  -534,  -534,   261,    30,  -534,    68,  -534,  -534,
     504,   504,   504,   281,   282,  -534,   299,   306,   308,   310,
     311,   312,   313,   314,   316,   504,   504,  1069,   252,  -534,
     190,  -534,   193,    10,  -534,  -534,   338,  1231,   196,  -534,
    -534,   214,  -534,    18,  -534,  -534,  1231,   333,  -534,   322,
     323,   309,   218,  -534,   504,  -534,    31,    17,   136,   232,
    -534,  -534,  -534,   233,   235,   237,   239,   240,  -534,  -534,
     139,   140,    24,   241,  -534,  -534,    61,    59,   242,   360,
      67,   -26,   504,   504,  -534,   504,   504,  -534,  -534,   671,
     504,   504,   363,   504,   366,   367,   368,   504,   504,   504,
     504,  -534,  -534,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,  1231,   370,   376,  -534,   377,
     504,   504,  1231,   111,   379,  -534,   380,   341,   -58,   -58,
     -65,   279,  1231,   488,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,   383,  -534,  -534,   674,   354,     9,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,   118,  -534,   118,   303,  -534,
    -534,  -534,  -534,   114,  -534,    64,  -534,  -534,  -534,   -30,
    1231,  1231,   707,  1231,  1231,  -534,   748,   805,   292,   825,
     294,   304,   307,  1089,  1126,   855,  1146,  1197,   892,   998,
    1104,  1211,  1266,  1277,  1277,   219,   219,   219,   219,   186,
     186,   204,   204,  -534,  -534,  -534,  1231,  1231,  1231,  -534,
    -534,  -534,  1231,  1231,  -534,  -534,  -534,  -534,  -534,   278,
     283,  -534,  -534,   -31,  -534,   410,   454,   410,   504,   291,
    -534,     8,   378,  -534,   300,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,   319,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,   504,   504,  -534,   391,   504,   -58,   151,   279,
    -534,  -534,   172,   359,  1174,   381,   315,  -534,  1253,   324,
    -534,  1231,    20,   395,  -534,   415,     3,  -534,   340,  -534,
    -534,   875,   912,   321,  1231,   -33,   405,  -534,  -534,  -534,
    -534,  -534,  -534,   328,   504,   -29,   406,  -534,   386,  -534,
    -534,  -534,   315,   375,   389,   392,  -534,   329,  -534,  -534,
    -534,   422,   318,  -534,  -534,  -534,  -534,   279,   -58,  -534,
     932,  -534,   504,   382,  -534,  -534,   504,    20,   504,   331,
    -534,  -534,   351,   332,   231,   962,  -534,   385,    35,   982,
    -534,  1019,  -534,  -534,   429,  -534,   279,   399,   421,  -534,
     546,  -534,  -534,  -534,    20,  -534,   504,  -534,   320,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,   408,   409,  -534,  -534,
     418,   419,  -534,  -534,  -534,  -534,  -534,  -534,  -534,   546,
     393,   423,   -21,  -534,  -534,  -534,  1039,    92,  -534,  -534,
      95,    58,   425,  -534,  -534,  -534,  -534,    34,   426,  -534,
     343,   430,   345,   346,    22,   348,   437,  -534,    -8,    58,
     450,   353,  -534,  -534,   461,  -534,    95,  -534,  -534,   364,
     365,    95,    73,  -534,    58,   148,   482,  -534,  -534,   440,
     450,  -534,   388,  -534,  -534,  -534,  -534,  -534,    28,   546,
    -534,    95,  -534,   486,  -534,   453,    28,   390,  -534,  -534,
     318,  -534,  -534,  -534,  -534,  -534,   318,    28,  -534,  -534,
     318,  -534
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -534,  -534,   -53,  -534,  -534,  -534,  -534,   325,  -534,  -534,
    -534,  -534,  -534,  -534,   396,  -534,  -534,   339,  -534,  -534,
    -534,   327,  -534,    70,  -162,  -315,  -486,   -17,    -4,  -534,
    -534,  -534,  -534,    29,  -534,   -43,  -534,  -526,  -534,    19,
    -447,  -178,  -534,  -534,  -251,  -534,  -534,  -534,  -534,  -534,
     133,  -534,  -534,  -534,  -534,  -534,  -534,  -167,   -90,  -534,
     -60,   108,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -374,   184,  -534,  -534,
     -18,  -533,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -402,  -534,  -534,  -534,  -534,  -534,   342,   -14,
    -534,  -534,  -240,  -534
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -272
static const yytype_int16 yytable[] =
{
     165,   137,   275,   277,   257,    80,   116,   394,   339,   340,
     416,   147,   394,   171,   238,   279,   355,   436,   156,    95,
     363,   259,   245,   502,   424,   527,   539,   566,   182,   407,
     408,   409,   410,   411,   562,   253,   192,   479,   532,   253,
     572,    14,   577,   527,   563,   460,   174,   175,   341,   177,
     179,   579,   502,   157,   480,   188,   158,   342,   555,   353,
     197,   198,   519,   184,   185,   281,   282,   260,   281,   282,
     526,   245,   504,   479,   195,   211,   212,   519,   235,    17,
     468,   254,   380,    18,   533,   472,   242,    18,   479,   437,
     480,   381,    78,   255,   412,    79,   519,   255,    32,   519,
     111,   112,    32,   399,   252,   480,   526,   479,    93,   425,
     479,   358,   502,   273,   334,   335,   256,   543,   359,   360,
     256,    42,    95,    91,   480,    42,   429,   480,    92,   395,
     354,   239,   290,   291,   395,   293,   294,   405,   178,   246,
     296,   297,   491,   299,   534,   278,   493,   303,   304,   305,
     306,   193,    94,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   118,   119,    97,   491,   520,
     332,   333,   283,    98,   284,   283,    99,   361,   246,   196,
     288,   100,   522,   521,   101,   525,   157,   362,   453,   158,
     159,   160,   120,   121,     1,     2,     3,   102,   103,   122,
     123,   124,   521,   104,   105,     4,   227,   228,   229,   230,
     231,   552,   356,   125,   357,   106,   554,   522,   108,   109,
     407,   408,   409,   410,   411,   126,   229,   230,   231,   110,
     127,   128,   129,   130,   131,   132,   567,   225,   226,   227,
     228,   229,   230,   231,   452,   118,   119,   262,   233,   263,
     273,   273,   274,   276,   114,   344,   133,   406,   415,   273,
     467,   556,   134,   115,   117,    80,   138,   139,   141,   144,
     145,   146,   120,   121,   148,   384,   388,   384,   391,   122,
     123,   124,   149,   155,   150,   412,   257,   152,   135,   136,
     154,   168,   169,   125,   171,   173,   176,   182,   187,   189,
     191,   236,   401,   402,   237,   126,   404,   243,   200,   201,
     127,   128,   129,   130,   131,   132,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   244,   202,   247,   248,   249,
     251,   118,   119,   203,   240,   204,   133,   205,   206,   207,
     208,   209,   134,   210,   440,   264,   268,   -97,   269,   250,
     270,   463,   271,   272,   280,   286,   287,   298,   120,   121,
     300,   301,   302,   234,   329,   122,   123,   124,   135,   136,
     330,   331,   455,   336,   337,   505,   459,   349,   461,   125,
     338,   351,   574,   344,   398,   403,   414,   417,   578,   427,
     378,   126,   581,   421,   418,   379,   127,   128,   129,   130,
     131,   132,   393,   118,   119,   367,   506,   369,   523,   428,
     431,   438,   441,   442,   445,   531,   446,   370,   451,   448,
     371,   456,   133,   464,   471,   475,   476,   477,   134,   273,
     120,   121,   400,   514,   435,   507,   508,   382,   123,   124,
     383,   439,   450,   462,   466,   509,   510,   118,   119,   241,
     515,   125,   529,   415,   135,   136,   535,   536,   537,   538,
     387,   541,   568,   126,   542,   546,   548,   551,   127,   128,
     129,   130,   131,   132,   120,   121,   557,  -106,   553,   559,
     569,   122,   123,   124,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   571,   133,   125,   190,   118,   119,   265,
     134,   561,   545,   573,   285,   458,   565,   126,    57,   292,
     540,   516,   127,   128,   129,   130,   131,   132,   513,   430,
     444,   390,   560,   289,   120,   121,   135,   136,     0,     0,
       0,   122,   123,   124,     0,     0,     0,     0,   133,     0,
     478,     0,    58,     0,   134,   125,     0,     0,     0,     0,
       0,   479,     0,     0,     0,     0,     0,   126,     0,    59,
       0,     0,   127,   128,   129,   130,   131,   132,   480,     0,
     135,   136,     0,     0,     0,     0,     0,   481,   482,   483,
     484,   485,     0,     0,   486,     0,     0,     0,   133,     0,
       0,    21,    60,     0,   134,    61,    62,    63,    64,    65,
     -42,    66,    67,    68,     0,    69,    70,    71,    72,    73,
       0,     0,     0,     0,    74,    75,    76,   487,     0,   488,
     135,   136,     0,   489,     0,     0,    42,     0,     0,     0,
       0,     0,     0,    22,    23,     0,     0,     0,     0,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,   490,   491,     0,   492,     0,
     493,    33,    34,    35,    36,    37,    38,     0,    21,     0,
       0,    39,    40,    41,     0,     0,   213,    42,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,     0,    43,     0,
     350,    57,     0,     0,  -271,     0,     0,     0,     0,    44,
      22,    23,     0,     0,     0,     0,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,   364,     0,    58,     0,     0,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,    39,    40,
      41,     0,    59,   213,    42,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,   295,    60,    44,     0,    61,    62,
      63,    64,    65,     0,    66,    67,    68,     0,    69,    70,
      71,    72,    73,     0,     0,     0,     0,    74,    75,    76,
     213,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     213,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,   365,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     213,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   213,   366,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   213,   368,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,   374,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   213,   433,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,   213,   434,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   213,   454,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,   469,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   213,   473,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,     0,
       0,   213,   474,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   213,   518,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,     0,     0,     0,     0,     0,     0,     0,     0,   213,
     232,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,     0,
     372,   415,   213,   376,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   213,   373,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,   375,   213,   420,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-534))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      90,    61,   180,   181,   166,    19,    59,     4,   248,   249,
     384,    71,     4,     4,     4,   182,   267,    50,    78,     4,
      50,     4,     4,   470,     4,   511,     4,   560,     4,    58,
      59,    60,    61,    62,     6,     4,     6,    15,     4,     4,
     566,     0,   575,   529,    16,   447,    99,   100,   113,   102,
     103,   577,   499,   111,    32,   108,   114,   122,   544,    50,
     120,   121,     4,     4,     5,     4,     5,    50,     4,     5,
      48,     4,   474,    15,     6,   135,   136,     4,   138,     4,
     454,    50,   113,   113,    50,    50,   146,   113,    15,   122,
      32,   122,     6,    62,   123,    49,     4,    62,    67,     4,
     121,   122,    67,   354,   164,    32,    48,    15,    37,    89,
      15,   278,   559,   121,     3,     4,    85,   125,     4,     5,
      85,    90,     4,    49,    32,    90,   123,    32,    49,   126,
     121,   121,   192,   193,   126,   195,   196,   377,   123,   121,
     200,   201,   120,   203,   518,   121,   124,   207,   208,   209,
     210,   121,    37,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     3,     4,    49,   120,    87,
     240,   241,   121,    37,   123,   121,    37,   123,   121,   121,
     123,    37,   507,   120,    37,   510,   111,   287,   438,   114,
     115,   116,    30,    31,   107,   108,   109,    37,    37,    37,
      38,    39,   120,    37,    37,   118,    30,    31,    32,    33,
      34,   536,   275,    51,   277,    37,   541,   542,    37,    37,
      58,    59,    60,    61,    62,    63,    32,    33,    34,    37,
      68,    69,    70,    71,    72,    73,   561,    28,    29,    30,
      31,    32,    33,    34,   432,     3,     4,   121,     6,   123,
     121,   121,   123,   123,   117,   114,    94,   116,    37,   121,
      39,   123,   100,     4,     4,   289,     4,     4,     4,     4,
       4,     4,    30,    31,     4,   345,   346,   347,   348,    37,
      38,    39,     3,    96,     4,   123,   458,     4,   126,   127,
       4,     4,     4,    51,     4,     4,     4,     4,    37,     4,
      49,   121,   372,   373,   121,    63,   376,   121,    37,    37,
      68,    69,    70,    71,    72,    73,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   121,    37,     4,    16,    16,
     122,     3,     4,    37,     6,    37,    94,    37,    37,    37,
      37,    37,   100,    37,   414,   123,   123,    37,   123,    50,
     123,   451,   123,   123,   123,   123,     6,     4,    30,    31,
       4,     4,     4,   121,     4,    37,    38,    39,   126,   127,
       4,     4,   442,     4,     4,   475,   446,     4,   448,    51,
      49,    37,   570,   114,    16,     4,    37,    16,   576,     4,
     122,    63,   580,    79,    89,   122,    68,    69,    70,    71,
      72,    73,   121,     3,     4,   123,   476,   123,   508,     4,
      80,    16,    16,    37,    49,   515,    37,   123,     6,    37,
     123,    49,    94,    82,    49,     6,    37,    16,   100,   121,
      30,    31,   123,    50,   123,    37,    37,    37,    38,    39,
      40,   123,   123,   122,   122,    37,    37,     3,     4,   121,
      37,    51,    37,    37,   126,   127,   123,    37,   123,   123,
      16,   123,   562,    63,    37,    25,   123,    16,    68,    69,
      70,    71,    72,    73,    30,    31,     4,   123,   123,    49,
       4,    37,    38,    39,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    50,    94,    51,   110,     3,     4,   170,
     100,   123,   529,   123,   187,   445,   559,    63,     4,   194,
     524,   502,    68,    69,    70,    71,    72,    73,   499,   396,
     422,   347,   550,   191,    30,    31,   126,   127,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    94,    -1,
       4,    -1,    38,    -1,   100,    51,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    63,    -1,    55,
      -1,    -1,    68,    69,    70,    71,    72,    73,    32,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    -1,    -1,    94,    -1,
      -1,     4,    88,    -1,   100,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,   110,   111,   112,    81,    -1,    83,
     126,   127,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,   119,   120,    -1,   122,    -1,
     124,    74,    75,    76,    77,    78,    79,    -1,     4,    -1,
      -1,    84,    85,    86,    -1,    -1,    15,    90,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,   111,    -1,
      36,     4,    -1,    -1,   117,    -1,    -1,    -1,    -1,   122,
      46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    36,    -1,    38,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    84,    85,
      86,    -1,    55,    15,    90,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    88,   122,    -1,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,   110,   111,   112,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,   123,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    15,   123,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,   123,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
     121,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
     121,    37,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,   121,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,   121,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   107,   108,   109,   118,   129,   143,   144,   133,   134,
     131,   132,   222,   223,     0,   145,   135,     4,   113,   226,
     227,     4,    46,    47,    52,    53,    54,    55,    56,    64,
      65,    66,    67,    74,    75,    76,    77,    78,    79,    84,
      85,    86,    90,   111,   122,   146,   150,   152,   168,   170,
     179,   180,   182,   184,   214,   224,   225,     4,    38,    55,
      88,    91,    92,    93,    94,    95,    97,    98,    99,   101,
     102,   103,   104,   105,   110,   111,   112,   136,     6,    49,
     227,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     166,    49,    49,    37,    37,     4,   130,    49,    37,    37,
      37,    37,    37,    37,    37,    37,    37,   147,    37,    37,
      37,   121,   122,   167,   117,     4,   130,     4,     3,     4,
      30,    31,    37,    38,    39,    51,    63,    68,    69,    70,
      71,    72,    73,    94,   100,   126,   127,   188,     4,     4,
     140,     4,   139,   138,     4,     4,     4,   188,     4,     3,
       4,   141,     4,   142,     4,    96,   188,   111,   114,   115,
     116,   229,   230,   186,   187,   186,   151,   215,     4,     4,
     148,     4,   172,     4,   130,   130,     4,   130,   123,   130,
     181,   183,     4,   185,     4,     5,   149,    37,   130,     4,
     142,    49,     6,   121,   137,     6,   121,   188,   188,   188,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,   188,   188,    15,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   121,     6,   121,   188,   121,   121,     4,   121,
       6,   121,   188,   121,   121,     4,   121,     4,    16,    16,
      50,   122,   188,     4,    50,    62,    85,   152,   190,     4,
      50,   216,   121,   123,   123,   145,   173,   171,   123,   123,
     123,   123,   123,   121,   123,   169,   123,   169,   121,   185,
     123,     4,     5,   121,   123,   149,   123,     6,   123,   226,
     188,   188,   135,   188,   188,   123,   188,   188,     4,   188,
       4,     4,     4,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,     4,
       4,     4,   188,   188,     3,     4,     4,     4,    49,   230,
     230,   113,   122,   228,   114,   191,   196,   201,   217,     4,
      36,    37,   176,    50,   121,   172,   130,   130,   185,     4,
       5,   123,   186,    50,    36,   123,   123,   123,   123,   123,
     123,   123,   121,   121,   123,   121,    16,   231,   122,   122,
     113,   122,    37,    40,   188,   204,   205,    16,   188,   206,
     205,   188,   219,   121,     4,   126,   177,   178,    16,   172,
     123,   188,   188,     4,   188,   230,   116,    58,    59,    60,
      61,    62,   123,   203,    37,    37,   204,    16,    89,   189,
      16,    79,   207,   202,     4,    89,   220,     4,     4,   123,
     178,    80,   174,   123,   123,   123,    50,   122,    16,   123,
     188,    16,    37,   192,   189,    49,    37,   221,    37,   218,
     123,     6,   169,   230,   123,   188,    49,   197,   151,   188,
     220,   188,   122,   186,    82,   175,   122,    39,   204,   123,
     193,    49,    50,   123,   123,     6,    37,    16,     4,    15,
      32,    41,    42,    43,    44,    45,    48,    81,    83,    87,
     119,   120,   122,   124,   153,   154,   156,   159,   161,   162,
     163,   164,   168,   198,   220,   186,   188,    37,    37,    37,
      37,   157,   158,   161,    50,    37,   167,   210,   123,     4,
      87,   120,   153,   186,   160,   153,    48,   154,   155,    37,
     194,   186,     4,    50,   204,   123,    37,   123,   123,     4,
     156,   123,    37,   125,   169,   155,    25,   208,   123,   211,
     199,    16,   153,   123,   153,   154,   123,     4,   209,    49,
     208,   123,     6,    16,   165,   163,   209,   153,   186,     4,
     195,    50,   165,   123,   169,   212,   200,   209,   169,   165,
     213,   169
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:

/* Line 1806 of yacc.c  */
#line 162 "ldgram.y"
    { ldlex_defsym(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 164 "ldgram.y"
    {
		  ldlex_popstate();
		  lang_add_assignment(exp_assop((yyvsp[(3) - (4)].token),(yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)));
		}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 171 "ldgram.y"
    {
		  ldlex_mri_script ();
		  PUSH_ERROR (_("MRI style script"));
		}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 176 "ldgram.y"
    {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 191 "ldgram.y"
    {
			einfo(_("%P%F: unrecognised keyword in MRI style script '%s'\n"),(yyvsp[(1) - (1)].name));
			}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 194 "ldgram.y"
    {
			config.map_filename = "-";
			}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 200 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 202 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 204 "ldgram.y"
    { mri_public((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 206 "ldgram.y"
    { mri_format((yyvsp[(2) - (2)].name)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 208 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 210 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree));}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 212 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 214 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 216 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 218 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 220 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 224 "ldgram.y"
    { mri_name((yyvsp[(2) - (2)].name)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 226 "ldgram.y"
    { mri_alias((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].name),0);}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 228 "ldgram.y"
    { mri_alias((yyvsp[(2) - (4)].name),0,(int) (yyvsp[(4) - (4)].integer));}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 230 "ldgram.y"
    { mri_base((yyvsp[(2) - (2)].etree)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 232 "ldgram.y"
    {  mri_truncate((unsigned int) (yyvsp[(2) - (2)].integer)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 236 "ldgram.y"
    { ldfile_open_command_file ((yyvsp[(2) - (2)].name)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 238 "ldgram.y"
    { lang_add_entry ((yyvsp[(2) - (2)].name), false); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 243 "ldgram.y"
    { mri_order((yyvsp[(3) - (3)].name)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 244 "ldgram.y"
    { mri_order((yyvsp[(2) - (2)].name)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 250 "ldgram.y"
    { mri_load((yyvsp[(1) - (1)].name)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 251 "ldgram.y"
    { mri_load((yyvsp[(3) - (3)].name)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 256 "ldgram.y"
    { mri_only_load((yyvsp[(1) - (1)].name)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 258 "ldgram.y"
    { mri_only_load((yyvsp[(3) - (3)].name)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 262 "ldgram.y"
    { (yyval.name) = NULL; }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 269 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(1) - (1)].name)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 271 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(2) - (2)].name)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 273 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(3) - (3)].name)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 277 "ldgram.y"
    {
	 ldlex_both();
	}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 281 "ldgram.y"
    {
	ldlex_popstate();
	}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 306 "ldgram.y"
    { lang_add_target((yyvsp[(3) - (4)].name)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 308 "ldgram.y"
    { ldfile_add_library_path ((yyvsp[(3) - (4)].name), false); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 310 "ldgram.y"
    { lang_add_output((yyvsp[(3) - (4)].name), 1); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 312 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (4)].name), (char *) NULL,
					    (char *) NULL, 1); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 315 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (8)].name), (yyvsp[(5) - (8)].name), (yyvsp[(7) - (8)].name), 1); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 317 "ldgram.y"
    { ldfile_set_output_arch((yyvsp[(3) - (4)].name)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 319 "ldgram.y"
    { command_line.force_common_definition = true ; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 322 "ldgram.y"
    { lang_enter_group (); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 324 "ldgram.y"
    { lang_leave_group (); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 326 "ldgram.y"
    { lang_add_map((yyvsp[(3) - (4)].name)); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 328 "ldgram.y"
    { ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 330 "ldgram.y"
    {
		  lang_add_nocrossref ((yyvsp[(3) - (4)].nocrossref));
		}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 338 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 341 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 344 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 347 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 350 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 353 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 369 "ldgram.y"
    { lang_add_entry ((yyvsp[(3) - (4)].name), false); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 377 "ldgram.y"
    {
			  (yyval.cname) = (yyvsp[(1) - (1)].name);
			}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 381 "ldgram.y"
    {
			  (yyval.cname) = "*";
			}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 385 "ldgram.y"
    {
			  (yyval.cname) = "?";
			}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 392 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(1) - (1)].cname);
			  (yyval.wildcard).sorted = false;
			  (yyval.wildcard).exclude_name = NULL;
			}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 398 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (5)].cname);
			  (yyval.wildcard).sorted = false;
			  (yyval.wildcard).exclude_name = (yyvsp[(3) - (5)].cname);
			}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 404 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = true;
			  (yyval.wildcard).exclude_name = NULL;
			}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 410 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(7) - (8)].cname);
			  (yyval.wildcard).sorted = true;
			  (yyval.wildcard).exclude_name = (yyvsp[(5) - (8)].cname);
			}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 420 "ldgram.y"
    {
			  lang_add_wild ((yyvsp[(1) - (1)].wildcard).name, (yyvsp[(1) - (1)].wildcard).sorted,
					 current_file.name,
					 current_file.sorted,
					 ldgram_had_keep, (yyvsp[(1) - (1)].wildcard).exclude_name);
			}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 427 "ldgram.y"
    {
			  lang_add_wild ((yyvsp[(3) - (3)].wildcard).name, (yyvsp[(3) - (3)].wildcard).sorted,
					 current_file.name,
					 current_file.sorted,
					 ldgram_had_keep, (yyvsp[(3) - (3)].wildcard).exclude_name);
			}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 437 "ldgram.y"
    {
			  lang_add_wild (NULL, false, (yyvsp[(1) - (1)].name), false,
					 ldgram_had_keep, NULL);
			}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 442 "ldgram.y"
    {
			  current_file.name = NULL;
			  current_file.sorted = false;
			}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 448 "ldgram.y"
    {
			  current_file = (yyvsp[(1) - (1)].wildcard);
			  /* '*' matches any file name.  */
			  if (strcmp (current_file.name, "*") == 0)
			    current_file.name = NULL;
			}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 460 "ldgram.y"
    { ldgram_had_keep = true; }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 462 "ldgram.y"
    { ldgram_had_keep = false; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 468 "ldgram.y"
    {
 		lang_add_attribute(lang_object_symbols_statement_enum); 
	      	}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 473 "ldgram.y"
    {
 		
		  lang_add_attribute(lang_constructors_statement_enum); 
		}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 478 "ldgram.y"
    {
		  constructors_sorted = true;
		  lang_add_attribute (lang_constructors_statement_enum);
		}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 484 "ldgram.y"
    {
			lang_add_data((int) (yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].etree));
			}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 489 "ldgram.y"
    {
			  lang_add_fill
			    (exp_get_value_int((yyvsp[(3) - (4)].etree),
					       0,
					       "fill value",
					       lang_first_phase_enum));
			}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 510 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 512 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 514 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 516 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 518 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 523 "ldgram.y"
    {
		  (yyval.integer) =	 exp_get_value_int((yyvsp[(2) - (2)].etree),
					   0,
					   "fill value",
					   lang_first_phase_enum);
		}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 529 "ldgram.y"
    { (yyval.integer) = 0; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 536 "ldgram.y"
    { (yyval.token) = '+'; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 538 "ldgram.y"
    { (yyval.token) = '-'; }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 540 "ldgram.y"
    { (yyval.token) = '*'; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 542 "ldgram.y"
    { (yyval.token) = '/'; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 544 "ldgram.y"
    { (yyval.token) = LSHIFT; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 546 "ldgram.y"
    { (yyval.token) = RSHIFT; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 548 "ldgram.y"
    { (yyval.token) = '&'; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 550 "ldgram.y"
    { (yyval.token) = '|'; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 560 "ldgram.y"
    {
		  lang_add_assignment (exp_assop ((yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].name), (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 564 "ldgram.y"
    {
		  lang_add_assignment (exp_assop ('=', (yyvsp[(1) - (3)].name),
						  exp_binop ((yyvsp[(2) - (3)].token),
							     exp_nameop (NAME,
									 (yyvsp[(1) - (3)].name)),
							     (yyvsp[(3) - (3)].etree))));
		}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 572 "ldgram.y"
    {
		  lang_add_assignment (exp_provide ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].etree)));
		}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 594 "ldgram.y"
    { region = lang_memory_region_lookup((yyvsp[(1) - (1)].name)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 600 "ldgram.y"
    { region->current =
		 region->origin =
		 exp_get_vma((yyvsp[(3) - (3)].etree), 0L,"origin", lang_first_phase_enum);
}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 608 "ldgram.y"
    { region->length = exp_get_vma((yyvsp[(3) - (3)].etree),
					       ~((bfd_vma)0),
					       "length",
					       lang_first_phase_enum);
		}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 617 "ldgram.y"
    { /* dummy action to avoid bison 1.25 error message */ }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 628 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(1) - (1)].name), 0); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 630 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(2) - (2)].name), 1); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 635 "ldgram.y"
    { lang_startup((yyvsp[(3) - (4)].name)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 641 "ldgram.y"
    { ldemul_hll((char *)NULL); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 646 "ldgram.y"
    { ldemul_hll((yyvsp[(3) - (3)].name)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 648 "ldgram.y"
    { ldemul_hll((yyvsp[(1) - (1)].name)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 656 "ldgram.y"
    { ldemul_syslib((yyvsp[(3) - (3)].name)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 662 "ldgram.y"
    { lang_float(true); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 664 "ldgram.y"
    { lang_float(false); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 669 "ldgram.y"
    {
		  (yyval.nocrossref) = NULL;
		}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 673 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (2)].name);
		  n->next = (yyvsp[(2) - (2)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 682 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (3)].name);
		  n->next = (yyvsp[(3) - (3)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 692 "ldgram.y"
    { ldlex_expression(); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 694 "ldgram.y"
    { ldlex_popstate(); (yyval.etree)=(yyvsp[(2) - (2)].etree);}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 699 "ldgram.y"
    { (yyval.etree) = exp_unop('-', (yyvsp[(2) - (2)].etree)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 701 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (3)].etree); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 703 "ldgram.y"
    { (yyval.etree) = exp_unop((int) (yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].etree)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 705 "ldgram.y"
    { (yyval.etree) = exp_unop('!', (yyvsp[(2) - (2)].etree)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 707 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (2)].etree); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 709 "ldgram.y"
    { (yyval.etree) = exp_unop('~', (yyvsp[(2) - (2)].etree));}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 712 "ldgram.y"
    { (yyval.etree) = exp_binop('*', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 714 "ldgram.y"
    { (yyval.etree) = exp_binop('/', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 716 "ldgram.y"
    { (yyval.etree) = exp_binop('%', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 718 "ldgram.y"
    { (yyval.etree) = exp_binop('+', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 720 "ldgram.y"
    { (yyval.etree) = exp_binop('-' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 722 "ldgram.y"
    { (yyval.etree) = exp_binop(LSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 724 "ldgram.y"
    { (yyval.etree) = exp_binop(RSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 726 "ldgram.y"
    { (yyval.etree) = exp_binop(EQ , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 728 "ldgram.y"
    { (yyval.etree) = exp_binop(NE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 730 "ldgram.y"
    { (yyval.etree) = exp_binop(LE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 732 "ldgram.y"
    { (yyval.etree) = exp_binop(GE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 734 "ldgram.y"
    { (yyval.etree) = exp_binop('<' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 736 "ldgram.y"
    { (yyval.etree) = exp_binop('>' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 738 "ldgram.y"
    { (yyval.etree) = exp_binop('&' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 740 "ldgram.y"
    { (yyval.etree) = exp_binop('^' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 742 "ldgram.y"
    { (yyval.etree) = exp_binop('|' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 744 "ldgram.y"
    { (yyval.etree) = exp_trinop('?' , (yyvsp[(1) - (5)].etree), (yyvsp[(3) - (5)].etree), (yyvsp[(5) - (5)].etree)); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 746 "ldgram.y"
    { (yyval.etree) = exp_binop(ANDAND , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 748 "ldgram.y"
    { (yyval.etree) = exp_binop(OROR , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 750 "ldgram.y"
    { (yyval.etree) = exp_nameop(DEFINED, (yyvsp[(3) - (4)].name)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 752 "ldgram.y"
    { (yyval.etree) = exp_intop((yyvsp[(1) - (1)].integer)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 754 "ldgram.y"
    { (yyval.etree) = exp_nameop(SIZEOF_HEADERS,0); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 757 "ldgram.y"
    { (yyval.etree) = exp_nameop(SIZEOF,(yyvsp[(3) - (4)].name)); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 759 "ldgram.y"
    { (yyval.etree) = exp_nameop(ADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 761 "ldgram.y"
    { (yyval.etree) = exp_nameop(LOADADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 763 "ldgram.y"
    { (yyval.etree) = exp_unop(ABSOLUTE, (yyvsp[(3) - (4)].etree)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 765 "ldgram.y"
    { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 767 "ldgram.y"
    { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 769 "ldgram.y"
    { (yyval.etree) = exp_nameop(NAME,(yyvsp[(1) - (1)].name)); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 771 "ldgram.y"
    { (yyval.etree) = exp_binop (MAX_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 773 "ldgram.y"
    { (yyval.etree) = exp_binop (MIN_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 775 "ldgram.y"
    { (yyval.etree) = exp_assert ((yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].name)); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 780 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 781 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 784 "ldgram.y"
    { ldlex_expression(); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 786 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 788 "ldgram.y"
    {
			  lang_enter_output_section_statement((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].etree),
							      sectype,
							      0, 0, 0, (yyvsp[(4) - (6)].etree));
			}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 794 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 796 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[(13) - (13)].integer), (yyvsp[(11) - (13)].name), (yyvsp[(12) - (13)].section_phdr));
		}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 802 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 804 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 806 "ldgram.y"
    {
			  lang_enter_overlay ((yyvsp[(3) - (7)].etree), (yyvsp[(5) - (7)].etree), (int) (yyvsp[(4) - (7)].integer));
			}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 811 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 813 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[(14) - (14)].integer), (yyvsp[(12) - (14)].name), (yyvsp[(13) - (14)].section_phdr));
			}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 822 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 824 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assop ('=', ".", (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 832 "ldgram.y"
    { sectype = noload_section; }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 833 "ldgram.y"
    { sectype = dsect_section; }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 834 "ldgram.y"
    { sectype = copy_section; }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 835 "ldgram.y"
    { sectype = info_section; }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 836 "ldgram.y"
    { sectype = overlay_section; }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 841 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 842 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 846 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (3)].etree); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 847 "ldgram.y"
    { (yyval.etree) = (etree_type *)NULL;  }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 852 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (6)].etree); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 854 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (10)].etree); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 858 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (2)].etree); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 859 "ldgram.y"
    { (yyval.etree) = (etree_type *) NULL;  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 864 "ldgram.y"
    { (yyval.integer) = 0; }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 866 "ldgram.y"
    { (yyval.integer) = 1; }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 871 "ldgram.y"
    { (yyval.name) = (yyvsp[(2) - (2)].name); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 872 "ldgram.y"
    { (yyval.name) = "*default*"; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 877 "ldgram.y"
    {
		  (yyval.section_phdr) = NULL;
		}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 881 "ldgram.y"
    {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[(3) - (3)].name);
		  n->used = false;
		  n->next = (yyvsp[(1) - (3)].section_phdr);
		  (yyval.section_phdr) = n;
		}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 897 "ldgram.y"
    {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[(2) - (2)].name));
			}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 902 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 904 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[(9) - (9)].integer), (yyvsp[(8) - (9)].section_phdr));
			}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 921 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 922 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 924 "ldgram.y"
    {
		  lang_new_phdr ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].etree), (yyvsp[(4) - (6)].phdr).filehdr, (yyvsp[(4) - (6)].phdr).phdrs, (yyvsp[(4) - (6)].phdr).at,
				 (yyvsp[(4) - (6)].phdr).flags);
		}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 932 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(1) - (1)].etree);

		  if ((yyvsp[(1) - (1)].etree)->type.node_class == etree_name
		      && (yyvsp[(1) - (1)].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR"
			};

		      s = (yyvsp[(1) - (1)].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		    }
		}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 962 "ldgram.y"
    {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 966 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(3) - (3)].phdr);
		  if (strcmp ((yyvsp[(1) - (3)].name), "FILEHDR") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).filehdr = true;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "PHDRS") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).phdrs = true;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "FLAGS") == 0 && (yyvsp[(2) - (3)].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[(2) - (3)].etree);
		  else
		    einfo (_("%X%P:%S: PHDRS syntax error at `%s'\n"), (yyvsp[(1) - (3)].name));
		}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 978 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(5) - (5)].phdr);
		  (yyval.phdr).at = (yyvsp[(3) - (5)].etree);
		}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 986 "ldgram.y"
    {
		  (yyval.etree) = NULL;
		}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 990 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(2) - (3)].etree);
		}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 998 "ldgram.y"
    {
		  ldlex_version_file ();
		  PUSH_ERROR (_("VERSION script"));
		}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1003 "ldgram.y"
    {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1012 "ldgram.y"
    {
		  ldlex_version_script ();
		}
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1016 "ldgram.y"
    {
		  ldlex_popstate ();
		}
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1028 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (5)].name), (yyvsp[(3) - (5)].versnode), NULL);
		}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1032 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].versnode), (yyvsp[(5) - (6)].deflist));
		}
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1039 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[(1) - (1)].name));
		}
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1043 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[(1) - (2)].deflist), (yyvsp[(2) - (2)].name));
		}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1050 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1054 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(1) - (2)].versyms), NULL);
		}
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1058 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (4)].versyms), NULL);
		}
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1062 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[(3) - (4)].versyms));
		}
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1066 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (8)].versyms), (yyvsp[(7) - (8)].versyms));
		}
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1073 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_regex (NULL, (yyvsp[(1) - (1)].name), ldgram_vers_current_lang);
		}
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1077 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_regex ((yyvsp[(1) - (3)].versyms), (yyvsp[(3) - (3)].name), ldgram_vers_current_lang);
		}
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1081 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(2) - (3)].name);
			}
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1086 "ldgram.y"
    {
			  ldgram_vers_current_lang = (yyvsp[(4) - (6)].name);
			}
    break;



/* Line 1806 of yacc.c  */
#line 4040 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1091 "ldgram.y"

void
yyerror(arg) 
     const char *arg;
{ 
  if (ldfile_assumed_script)
    einfo (_("%P:%s: file format not recognized; treating as linker script\n"),
	   ldfile_input_filename);
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
     einfo ("%P%F:%S: %s in %s\n", arg, error_names[error_index-1]);
  else
     einfo ("%P%F:%S: %s\n", arg);
}

