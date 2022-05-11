#pragma once

#include "Figure.h"

class Line : public Figure {

public:
	Line(int _X, int _Y, int _R);
	void draw() override;
	void hide() override;
	void move(int _X, int _Y) override;
};
