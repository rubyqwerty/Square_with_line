#include "DynArr.h";

void DynArr::push(Figure *figure)
{
	array.push_back(figure);
}

void DynArr::print()
{
	for (auto i : array) 
		i->draw();
}

void DynArr::deleteArray()
{
	for (auto i : array)
	{
		i->hide();
		delete i;
	}

	array.clear();
}

DynArr::~DynArr()
{
	for (auto i : array)
		delete i;

	array.clear();
}