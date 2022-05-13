#pragma once

#include "Figure.h"

class Square : public Figure {

private:
	COLORREF ColorSquare;

public:
	Square(int, int, int, COLORREF = RGB(218, 255, 255));
	void draw() override;
	void hide() override;
	void move(int, int) override; 
};