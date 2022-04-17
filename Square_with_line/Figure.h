//убрать из конструкторов пересчет координат. Переместить их в функцию draw()
#pragma once

#include <iostream>
#include <Windows.h>
#include <windowsx.h>

const int NotUsed = system("color F0");
using namespace std;

class Figure {

	public:
		virtual void draw() = 0;
		virtual void hide() = 0;
		virtual void move(int, int);
		Figure();
		~Figure();

	protected:
		HWND hwnd;
		HDC hdc;
		RECT rt;
		HPEN    pen;
		HBRUSH  brush;
		int X;
		int Y;
		int R;
};

