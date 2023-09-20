#pragma once

#include "io.h"
#include "Ch15_PureVirtualParent.h"

class PureVirtualChild : public PureVirtualParent
{
public:
	virtual void Print();

	void PrintClass() override;
	
};

