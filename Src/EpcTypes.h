#pragma once

typedef int8_t		int8;
typedef int16_t		int16;
typedef int32_t		int32;
typedef int64_t		int64;

typedef uint8_t		uint8;
typedef uint8_t		byte;
typedef uint16_t	uint16;
typedef uint32_t	uint32;
typedef uint64_t	uint64;

typedef char		AnsiChar;
typedef wchar_t		WideChar;

typedef AnsiChar*	AnsiString;
typedef WideChar*	WideString;

const size_t MAX_BUFFER_LENGTH	= 4096;
const size_t MAX_STRING_LENGTH	= 4096;
const size_t MAX_PATH_LENGTH	= 1024;
