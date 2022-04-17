#include "ComplexFigure.h"
#include <vector>


int main()
{

	Figure* square = new Square(300, 200, 50);
	square->draw();

	Figure* line = new Line(200, 200, 50);
	line->draw();

	Figure* complexfigure = new ComplexFigure(100, 200, 50);
	complexfigure->draw();
}

