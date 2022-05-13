#pragma once

#include <iostream>
#include <Windows.h>
#include <windowsx.h>
#include <vector>
#include <conio.h>

const int NotUsed = system("color F0");

using namespace std;

class Figure {

public:
	virtual void draw() = 0;
	virtual void hide() = 0;
	virtual void move(int _X, int _Y);
	Figure();
	~Figure();

	class Border {
	public:
		string name_figure;
		string exit_point;
		Border(string _name_figure, string _exit_point) : name_figure(_name_figure), exit_point(_exit_point) {};
	};

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

