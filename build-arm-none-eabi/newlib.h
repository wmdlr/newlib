/*
 * Autogenerated by the Meson build system.
 * Do not edit, your changes will be lost.
 */

#pragma once

//  To remove impure_data, we must define both REENTRANT_SYSCALLS_PROVIDED and MISSING_SYSCALL_NAMES

/* Reentrant syscalls provided for us */
#define REENTRANT_SYSCALLS_PROVIDED
//  Previously: #undef REENTRANT_SYSCALLS_PROVIDED

/* use regular syscalls */
#define MISSING_SYSCALL_NAMES
//  Previously: #undef MISSING_SYSCALL_NAMES

/* Optimize for space over speed */
#define PREFER_SIZE_OVER_SPEED

#define HAVE_ALIAS_ATTRIBUTE

/* Compiler has long double type */
#undef HAVE_LONG_DOUBLE
// #define HAVE_LONG_DOUBLE

/* use global errno variable */
#undef NEWLIB_GLOBAL_ERRNO

/* Use tiny stdio from gcc avr */
#undef TINY_STDIO

#undef _ATEXIT_DYNAMIC_ALLOC

#undef _FSEEK_OPTIMIZATION

#undef _FVWRITE_IN_STREAMIO

/* GCC flag to prevent detecting memcpy/memset patterns */
#define _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL

#undef _ICONV_ENABLED

#undef _ICONV_ENABLE_EXTERNAL_CCS

/* math library only offers ieee semantics */
#define _IEEE_LIBM

#define _LITE_EXIT

#undef _MB_CAPABLE

#define _MB_LEN_MAX 1

#undef _NANO_FORMATTED_IO

#undef _NANO_MALLOC

#undef _REENT_GLOBAL_ATEXIT

#undef _RETARGETABLE_LOCKING

#undef _UNBUF_STREAM_OPT

#undef _WANT_IO_C99_FORMATS

#undef _WANT_IO_LONG_DOUBLE

#undef _WANT_IO_LONG_LONG

#undef _WANT_IO_POS_ARGS

#undef _WANT_REENT_GLOBAL_STDIO_STREAMS

#undef _WANT_REENT_SMALL

#undef _WANT_REGISTER_FINI

#undef _WANT_USE_LONG_TIME_T

#undef _WIDE_ORIENT

/* Use tiny stdio FILE */
#undef __CUSTOM_FILE_IO__

/* extended locale support */
#undef __HAVE_LOCALE_INFO_EXTENDED__

/* locale support */
#undef __HAVE_LOCALE_INFO__

#define __SINGLE_THREAD__

