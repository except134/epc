#include "PCH.h"

EPC_NAMESPACE_USING

int main(int argc, char* argv[])
{
	std::shared_ptr<IWindow> win = EpcCreateWindow();
	win->Initialize();

    printf("hello from epc!\n");

	std::wcout << __cplusplus << argv[0] << std::endl;
	int i;
	std::wcin >> i;

    return 0;
}

