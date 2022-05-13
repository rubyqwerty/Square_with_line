#pragma once

#include "Figure.h"

class DynArr {

private:
	vector <Figure*> array;

public:
	void push(Figure* figure);
	void print();
	void deleteArray();
	~DynArr();
	DynArr() {};

};