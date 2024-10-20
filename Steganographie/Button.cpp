#include "Button.h"

Button::Button(int id, HWND parent, const wchar_t* text, int x, int y, int width, int height, HINSTANCE hInst, std::function<void()> onClick, int customId)
	: id(id), onClick(onClick), customId(customId)
{
	hWnd = CreateWindowW(L"BUTTON", text, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
		x, y, width, height, parent, (HMENU)id, hInst, nullptr);

	SetWindowLongPtr(hWnd, GWLP_USERDATA, customId);
}

Button::~Button()
{
}


int Button::getCustomId(HWND hWnd)
{
	return (int)GetWindowLongPtr(hWnd, GWLP_USERDATA);
}

HWND Button::getHandle()
{
	return hWnd;
}
