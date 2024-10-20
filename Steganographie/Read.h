#pragma once

#include <iostream>
#include <stdio.h>
#include <windows.h>

class Read
{
public:
	Read();
	~Read();

	bool Execute(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream);
private:
	BITMAPFILEHEADER fileHeader;
	BITMAPINFOHEADER infoHeader;

};

