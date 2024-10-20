#pragma once
#include <windows.h>

class InputText
{
public:
    InputText(LPCWSTR lpClassName, LPCWSTR lpWindowName, int x, int y, int width, int height, HWND hWnd, int idInput, HINSTANCE hInstance);
    ~InputText();

    int getId();

private:
    HWND inputText;
    int id;
};

