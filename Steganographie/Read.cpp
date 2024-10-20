#include "Read.h"

Read::Read()
{

}

Read::~Read()
{

}

bool Read::Execute(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream)
{
	size_t controlRead = fread(_Buffer, _ElementSize, _ElementCount, _Stream);
	if (controlRead != _ElementCount)
	{
		std::cerr << "Erreur de lecture de l'en-t�te du fichier Bitmap." << std::endl;
		return false;
	}

	return true;
}


