#pragma once

#if defined(__x86_64__) || defined(_M_X64)
#	define EPC_PLATFORM_X64			1
#elif defined(__i386) || defined(_M_IX86)
#	define EPC_PLATFORM_X86			1
#else
#	define EPC_PLATFORM_UNKNOWN_CPU	1
#endif

#if defined(_WIN32)
#	define EPC_PLATFORM_WINDOWS 1
#	if defined(_WIN64)
#		if !EPC_PLATFORM_X64
#			error Unsupported Windows 64 CPU (the only supported is x86-64).
#		endif
#	else
#		if !EPC_PLATFORM_X86
#			error Unsupported Windows 32 CPU (the only supported is x86).
#		endif
#	endif
#elif defined(__linux__) || defined(__linux)
#	define EPC_PLATFORM_LINUX   1
#	if !EPC_PLATFORM_X64 && !EPC_PLATFORM_X86
#		error Unsupported Linux CPU (the only supported are x86 and x86-64).
#	endif
#else
#	error Unknown target platform.
#endif

#if defined(EPC_PLATFORM_X64) && EPC_PLATFORM_X64 != 1
#	error Wrong value of EPC_PLATFORM_X64.
#endif

#if defined(EPC_PLATFORM_X86) && EPC_PLATFORM_X86 != 1
#	error Wrong value of EPC_PLATFORM_X86.
#endif

#if defined(EPC_PLATFORM_UNKNOWN_CPU) && EPC_PLATFORM_UNKNOWN_CPU != 1
#	error Wrong value of EPC_PLATFORM_UNKNOWN_CPU.
#endif

#if EPC_PLATFORM_X64 + EPC_PLATFORM_X86 + EPC_PLATFORM_UNKNOWN_CPU != 1
#	error Invalid CPU type.
#endif

#if EPC_PLATFORM_LINUX + EPC_PLATFORM_WINDOWS != 1
#	error Invalid platform type.
#endif

#if defined(__GNUC__)
#	include "EpcCompiler.GCC.h"
#elif defined(_MSC_VER)
#	include "EpcCompiler.MSVC.h"
#else
#	error Unsupported compiler was used.
#endif

#if EPC_PLATFORM_WINDOWS 
#	include "EpcPlatform.Windows.h"
#elif EPC_PLATFORM_LINUX 
#	include "EpcPlatform.Linux.h"
#else
#	error Current Platform not supported. Please provide a concrete implementation library.
#endif



