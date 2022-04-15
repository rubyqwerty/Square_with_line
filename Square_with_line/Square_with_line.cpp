#include "ComplexFigure.h"
#include <vector>


int main()
{
	Figure* line = new Line(10, 10, 5);
	line->draw();
	cout << endl;

	Figure* square = new Square(20, 30, 4);
	square->draw();
	cout << endl;

	Figure* complexfigure = new ComplexFigure(7, 7, 12);
	complexfigure->draw();

}

