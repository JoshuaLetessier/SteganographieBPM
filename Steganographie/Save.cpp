#include "Save.h"

Save::Save()
{
	load = new Load();
	write = new Write();
}

Save::~Save()
{
	delete load;
	delete write;
}

bool Save::Execute(const char* filePath, void* _Buffer, size_t _ElementSize, size_t _ElementCount)
{
	if (!load->Execute(filePath))
	{
		return false;
	}

	f = load->GetFile();

	if (!write->Execute(_Buffer, _ElementSize, _ElementCount, f))
	{
		return false;
	}

	fclose(f);


	return true;
}
