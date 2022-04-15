#include "ComplexFigure.h"
//some
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
	cout << "draw Complex Figure: \n";
	cout << "--------------------------------\n";
	line->draw();
	square->draw();
	cout << "---------------------------------\n";
}

ComplexFigure::~ComplexFigure()
{
	delete line;
	delete square;
}