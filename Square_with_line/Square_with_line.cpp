#include "ComplexFigure.h"
#include "DynArr.h"

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_7_Figures");

	DynArr arr;

	Figure* square = new Square(300, 200, 50);
	//square->draw();
	

	Figure* line = new Line(500, 200, 50);
	//line->draw();
	
	Figure* complexfigure = new ComplexFigure(100, 200, 50);
	//complexfigure->draw();

	arr.push(square);
	arr.push(line);
	arr.push(complexfigure);
	arr.push(new Line(510, 200, 100));
	arr.push(new Square(300, 50, 15));
	arr.push(new ComplexFigure(200, 50, 10));

	arr.print();
	_getch();
	arr.deleteArray();

	_getch();

	return 0;
}

