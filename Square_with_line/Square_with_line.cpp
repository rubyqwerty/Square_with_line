#include "ComplexFigure.h"
#include <vector>
#include <conio.h>

int main()
{
	Figure* square = new Square(500, 400, 50);
	square->draw();


	Figure* line = new Line(200, 200, 50);
	line->draw();

	Figure* complexfigure = new ComplexFigure(100, 200, 50);
	complexfigure->draw();

	_getch();

	complexfigure->hide();
	return 0;
}

