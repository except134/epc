#pragma once

#define EPC_USE_NAMESPACE	1
#define EPC_USE_NCURSES		1

#if EPC_USE_NAMESPACE==1
#	define EPC_NAMESPACE_BEGIN	namespace epc {
#	define EPC_NAMESPACE_END	}
#	define EPC_NAMESPACE_USING	using namespace epc;
#else
#	define EPC_NAMESPACE_BEGIN	
#	define EPC_NAMESPACE_END	
#	define EPC_NAMESPACE_USING	
#endif
