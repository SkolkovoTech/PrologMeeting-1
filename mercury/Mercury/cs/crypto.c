/*
** Automatically generated from `crypto.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__crypto__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "/usr/local/mercury-14.01.1/lib/mercury/ints/Mercury/ints/io.int"
#include "io.mh"

#line 29 "Mercury/cs/crypto.c"
#line 536 "/usr/local/mercury-14.01.1/lib/mercury/ints/Mercury/ints/io.int"
#include "time.mh"

#line 33 "Mercury/cs/crypto.c"
#line 537 "/usr/local/mercury-14.01.1/lib/mercury/ints/Mercury/ints/io.int"
#include "string.mh"

#line 37 "Mercury/cs/crypto.c"
#line 31 "/usr/local/mercury-14.01.1/lib/mercury/ints/Mercury/int2s/bitmap.int2"
#include "bitmap.mh"

#line 41 "Mercury/cs/crypto.c"
#line 42 "Mercury/cs/crypto.c"
#include "crypto.mh"

#line 45 "Mercury/cs/crypto.c"
#line 46 "Mercury/cs/crypto.c"
#ifndef CRYPTO_DECL_GUARD
#define CRYPTO_DECL_GUARD

#line 50 "Mercury/cs/crypto.c"
#line 51 "Mercury/cs/crypto.c"

#endif
#line 54 "Mercury/cs/crypto.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(main_2_0, 2,10,12,14,16,18,20,66,5,6)
MR_decl_label2(main_2_0, 67,68)
MR_def_extern_entry(main_2_0)



MR_decl_entry(io__read_char_3_0);
MR_decl_entry(io__write_char_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(crypto_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,10,12,14,16,18,20,66,5,6)
	MR_init_label2(main_2_0,67,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_char_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(main_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i68);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,97)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_r1 = (MR_Integer) 110;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,98)) {
		MR_GOTO_LAB(main_2_0_i12);
	}
	MR_r1 = (MR_Integer) 111;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,122)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
	MR_r1 = (MR_Integer) 109;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,65)) {
		MR_GOTO_LAB(main_2_0_i16);
	}
	MR_r1 = (MR_Integer) 78;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,66)) {
		MR_GOTO_LAB(main_2_0_i18);
	}
	MR_r1 = (MR_Integer) 79;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,90)) {
		MR_GOTO_LAB(main_2_0_i20);
	}
	MR_r1 = (MR_Integer) 77;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__write_char_3_0,
		main_2_0_i66);
MR_def_label(main_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_np_call_localret_ent(io__read_char_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		main_2_0_i6);
MR_def_label(main_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i67);
MR_def_label(main_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__crypto_maybe_bunch_0(void)
{
	crypto_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__crypto__init(void);
void mercury__crypto__init_type_tables(void);
void mercury__crypto__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__crypto__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__crypto__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__crypto__init_threadscope_string_table(void);
#endif

void mercury__crypto__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__crypto_maybe_bunch_0();
	mercury__crypto__init_debugger();
}

void mercury__crypto__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__crypto__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__crypto__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__crypto);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__crypto__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__crypto__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
