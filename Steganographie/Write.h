#pragma once
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <cstdio>

class Write
{
public:
	Write();
	~Write();

	bool Execute(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream);
};

