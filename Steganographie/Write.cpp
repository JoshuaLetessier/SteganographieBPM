#include "Write.h"

Write::Write()
{
}

Write::~Write()
{
}

bool Write::Execute(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream)
{
   size_t controlWrite =  fwrite(_Buffer, _ElementSize, _ElementCount, _Stream);
   if (controlWrite != _ElementCount)
   {
	   std::cerr << "Erreur de lecriture du fichier Bitmap." << std::endl;
	   return false;
   }
   
    return true;
}
