#pragma once
#include "Load.h"
#include "Write.h"
#include <wingdi.h>


class Save
{

public:
	Save();
	~Save();

	bool Execute(const char* filePath, void* _Buffer, size_t _ElementSize, size_t _ElementCount);

private:
    Load* load;
	Write* write;

	FILE* f;
};

