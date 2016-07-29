#pragma once

EPC_NAMESPACE_BEGIN

class IMouse
{
public:
	virtual bool Initialize() = 0;
};

std::shared_ptr<IMouse> EpcCreateMouse();

EPC_NAMESPACE_END
