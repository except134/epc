#include "PCH.h"

EPC_NAMESPACE_USING

#if EPC_USE_NCURSES==1
std::shared_ptr<IWindow> epc::EpcCreateWindow()
{
	return std::make_shared<CWindowNcurses>();
}
#endif

bool CWindowNcurses::Initialize()
{
	printf("hello from window!\n");
	return true;
}
