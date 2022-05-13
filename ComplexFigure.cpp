#include "ComplexFigure.h"

ComplexFigure::ComplexFigure(int _X, int _Y, int _R)
{
	X = _X;
	Y = _Y;
	R = _R;
	line = new Line(X, Y, R);
	square = new Square(X, Y, R);
}

void ComplexFigure::draw() 
{
	if (X - R <= rt.left)
		throw Border("ComplexFigure ", "exit on the left");

	if (X + R >= rt.right)
		throw Border("ComplexFigure ", "exit on the right");

	if (Y - R <= rt.top)
		throw Border("ComplexFigure ", "exit from the top");

	if (Y + R >= rt.bottom)
		throw Border("ComplexFigure ", "exit from the bottom");

	square->draw();
	line->draw();
}

void ComplexFigure::hide()
{
	line->hide();
	square->hide();
}

ComplexFigure::~ComplexFigure()
{
	delete line;
	delete square;
}

void ComplexFigure::move(int _X, int _Y)
{
	square->move(_X, _Y);
	line->move(_X, _Y);
}