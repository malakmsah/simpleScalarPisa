/* itbl-ops.h
   Copyright (C) 1997, 1999 Free Software Foundation, Inc.

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to the Free
   Software Foundation, 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.  */

/* External functions, constants and defines for itbl support */

#include "ansidecl.h"

/* Include file notes: "expr.h" needed before targ-*.h,
 * "targ-env.h" includes the chain of target dependant headers,
 * "targ-cpu.h" has the HAVE_ITBL_CPU define, and
 * as.h includes them all */
#include "as.h"

#ifdef HAVE_ITBL_CPU
#include "itbl-cpu.h"
#endif

/* Defaults for definitions required by generic code */
#ifndef ITBL_NUMBER_OF_PROCESSORS
#define ITBL_NUMBER_OF_PROCESSORS 1
#endif

#ifndef ITBL_MAX_BITPOS
#define ITBL_MAX_BITPOS 31
#endif

#ifndef ITBL_TYPE
#define ITBL_TYPE unsigned long
#endif

#ifndef ITBL_IS_INSN
#define ITBL_IS_INSN(insn) 1
#endif

#ifndef ITBL_DECODE_PNUM
#define ITBL_DECODE_PNUM(insn) 0
#endif

#ifndef ITBL_ENCODE_PNUM
#define ITBL_ENCODE_PNUM(pnum) 0
#endif

typedef ITBL_TYPE t_insn;

/* types of entries */
typedef enum
  {
    e_insn,
    e_dreg,
    e_regtype0 = e_dreg,
    e_creg,
    e_greg,
    e_addr,
    e_nregtypes = e_greg + 1,
    e_immed,
    e_ntypes,
    e_invtype			/* invalid type */
  } e_type;

typedef enum
  {
    e_p0,
    e_nprocs = NUMBER_OF_PROCESSORS,
    e_invproc			/* invalid processor */
  } e_processor;

/* 0 means an instruction table was not specified. */
extern int itbl_have_entries;

/* These routines are visible to the main part of the assembler */

int itbl_parse PARAMS ((char *insntbl));
void itbl_init PARAMS ((void));
char *itbl_get_field PARAMS ((char **s));
unsigned long itbl_assemble PARAMS ((char *name, char *operands));
int itbl_disassemble PARAMS ((char *str, unsigned long insn));
int itbl_parse PARAMS ((char *tbl));	/* parses insn tbl */
int itbl_get_reg_val PARAMS ((char *name, unsigned long *pval));
int itbl_get_val PARAMS ((e_processor processor, e_type type, char *name,
			  unsigned long *pval));
char *itbl_get_name PARAMS ((e_processor processor, e_type type,
			     unsigned long val));

/* These routines are called by the table parser used to build the
   dynamic list of new processor instructions and registers. */

struct itbl_entry *itbl_add_reg PARAMS ((int yyproc, int yytype,
					 char *regname, int regnum));
struct itbl_entry *itbl_add_insn PARAMS ((int yyproc, char *name,
	     unsigned long value, int sbit, int ebit, unsigned long flags));
struct itbl_field *itbl_add_operand PARAMS ((struct itbl_entry * e, int yytype,
				  int sbit, int ebit, unsigned long flags));
