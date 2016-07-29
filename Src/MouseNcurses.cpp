#include "PCH.h"

EPC_NAMESPACE_USING

#if EPC_USE_NCURSES==1
std::shared_ptr<IMouse> epc::EpcCreateMouse()
{
	return std::make_shared<CMouseNcurses>();
}
#endif

bool CMouseNcurses::Initialize()
{
	printf("hello from mouse!\n");
	return true;
}
