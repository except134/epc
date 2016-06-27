#include "PCH.h"

int 
#if EPC_COMPILER_MSVC==1
wmain
#else
main
#endif
(int argc, WideString argv[])
{
    printf("hello from epc!\n");

	std::wcout << __cplusplus << std::endl;
	int i;
	std::wcin >> i;

    return 0;
}

