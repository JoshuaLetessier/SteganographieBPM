#pragma once
#include <vector>
#include <iostream>

#include "Struct.cpp"

class HideData
{
public:
	std::vector<Pixel> Execute(std::vector<bool> binaires, std::vector<Pixel>& pixels);
};

