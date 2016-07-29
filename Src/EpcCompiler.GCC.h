#pragma once

#ifndef __GNUC__
#	error This file should only be included in g++ compiler
#endif

#define EPC_COMPILER_GCC     1
#define EPC_COMPILER_VERSION ((__GNUC__ * 100) + (__GNUC_MINOR__))
#if EPC_COMPILER_VERSION < 409
#	error This version of g++ is not supported, the minimum supported version is 4.9
#endif
#if defined(__cplusplus) && __cplusplus < 201300L
#	error The compiler is not in C++14 mode, this is required for compiling Epc
#endif

#ifndef TEXT
#define TEXT(quote)	L##quote
#endif
