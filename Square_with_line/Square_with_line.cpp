#include "ComplexFigure.h"
#include <vector>
#include <conio.h>

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_7_Figures");

	Figure* square = new Square(300, 200, 50);
	square->draw();
	

	Figure* line = new Line(500, 200, 50);
	line->draw();
	
	Figure* complexfigure = new ComplexFigure(100, 200, 50);
	complexfigure->draw();

	_getch();

	square->move(250,200);
	complexfigure->move(100, 100);
	line->move(400, 200);
	_getch();

	return 0;
}

