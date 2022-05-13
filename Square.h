#pragma once

#include "Figure.h"

class Square : public Figure {

public:
	Square(int _X, int _Y, int _R);
	void draw() override;
	void hide() override;
};