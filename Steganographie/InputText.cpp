#include "InputText.h"

InputText::InputText(LPCWSTR lpClassName, LPCWSTR lpWindowName, int x, int y, int width, int height, HWND hWnd, int idInput, HINSTANCE hInstance)
{
    inputText = CreateWindowW(lpClassName, lpWindowName, WS_VISIBLE | WS_CHILD | SS_CENTER,
	   x, y, width, height, hWnd, (HMENU)idInput, hInstance, nullptr);
    id = id;
}

InputText::~InputText()
{
}


int InputText::getId()
{
	return id;
}