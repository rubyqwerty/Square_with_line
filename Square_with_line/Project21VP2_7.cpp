#include "ComplexFigure.h"
#include "DynArr.h"
#include <stdlib.h>
int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_7_Figures");
	DynArr arr;
	Figure* square = new Square(300, 200, 50);
	Figure* line = new Line(600, 200, 50);
	Figure* complexfigure = new ComplexFigure(240, 170, 50);
	arr.push(new Line(400, 70, 60));
	arr.push(new Square(100, 100, 60));
	arr.push(new ComplexFigure(300, 100, 60));
	try
	{
		complexfigure->draw();
		square->draw();
		line->draw();
		system("pause");
		square->move(110, 230);
		line->move(100, 160);
		complexfigure->move(560, 100);
		system("pause");
		arr.print();
		system("pause");
	}
	catch (Figure::Border border)
	{
		cout << "Breaking window borders: " << border.name_figure << border.exit_point;
	}
	arr.deleteArray();
	system("pause");
	return 0;
}

