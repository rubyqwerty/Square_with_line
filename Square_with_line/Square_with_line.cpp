#include "ComplexFigure.h"
#include "DynArr.h"

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_7_Figures");

	DynArr arr;

	Figure* square = new Square(300, 200, 50);
	
	Figure* line = new Line(600, 200, 50);
	
	Figure* complexfigure = new ComplexFigure(100, 200, 50);
	
	try 
	{
		complexfigure->draw();
		square->draw();
		line->draw();
	}
	catch (Figure::Border border)
	{
		cout << "Breaking window borders: " << border.name_figure << border.exit_point;
	}

	arr.push(square);
	arr.push(line);
	arr.push(complexfigure);
	arr.push(new Line(510, 200, 100));
	arr.push(new Square(300, 50, 15));
	arr.push(new ComplexFigure(200, 50, 10));

	arr.print();
	_getch();
	arr.deleteArray();

	return 0;
}

