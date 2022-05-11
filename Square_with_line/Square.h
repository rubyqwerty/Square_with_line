#pragma once

#include "Figure.h"

class Square : public Figure {

public:
	Square(int, int, int);
	void draw() override;
	void hide() override;
	void move(int, int) override; 
};