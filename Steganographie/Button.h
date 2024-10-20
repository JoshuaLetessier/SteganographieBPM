#pragma once

#include <iostream>
#include <functional>
#include <windows.h>

class Button
{
public:
	Button(int id, HWND parent, const wchar_t* text, int x, int y, int width, int height, HINSTANCE hInst, std::function<void()> onClick, int customId = -1);

	~Button();

	static int getCustomId(HWND hWnd);

	HWND getHandle();

private:
	HWND hWnd;
	int id;
	std::function<void()> onClick;
	int customId;
};

