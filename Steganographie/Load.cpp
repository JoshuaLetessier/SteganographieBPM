#include "Load.h"

Load::Load()
{
	f = nullptr;
}

Load::~Load()
{
	if (f) {
		fclose(f);
	}
}

bool Load::Execute(const char* filePath)
{
	errno_t err = fopen_s(&f, filePath, "r"); // Ouvrir en mode lecture 
	if (err != 0) {
		std::cerr << "Failed to open file: " << filePath << std::endl;
		return false;
	}
	else {
		std::cout << "Ouverture du fichier" << std::endl;
		return true;
	}
}

FILE* Load::GetFile()
{
	return f;
}