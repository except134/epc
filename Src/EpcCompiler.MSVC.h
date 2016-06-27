#pragma once

#ifndef _MSC_VER
#	error This file should only be included on MSVC compiler
#endif

#define EPC_COMPILER_MSVC    1
#define EPC_COMPILER_VERSION (_MSC_VER)
#if EPC_COMPILER_VERSION < 1900
#	error This version of MSVC is not tested
#endif

