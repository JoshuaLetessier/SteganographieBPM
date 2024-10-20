#pragma once

#include <iostream>
#include <stdio.h>


class Load
{
public:
	Load();
	~Load();
	bool Execute(const char* filePath);

	/*Getter*/
	FILE* GetFile();

private:
	FILE* f;

};

