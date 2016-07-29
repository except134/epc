#pragma once

EPC_NAMESPACE_BEGIN

class IWindow
{
public:
	virtual bool Initialize() = 0;
};

std::shared_ptr<IWindow> EpcCreateWindow();

EPC_NAMESPACE_END
