#pragma once

#include <iostream>
#include <Windows.h>
#include <windowsx.h>

const int NotUsed = system("color F0");
using namespace std;

class Figure {

	public:
		virtual void draw() = 0;
		Figure();
		~Figure();

	protected:
		HWND hwnd;
		HDC hdc;
		RECT rt;
		HPEN    pen;
		HBRUSH  brush;
};

