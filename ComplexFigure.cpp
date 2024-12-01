#include"ComplexFigure.h"
#include <cmath>
ComplexFigure::~ComplexFigure()
{
	delete circle;
	delete triangle;
}
void ComplexFigure::hide()
{
	triangle->hide();
	circle->hide();
}
void ComplexFigure::move(int new_x, int new_y)
{
	triangle->move(new_x, new_y);
	Sleep(10);
	circle->move(new_x, new_y);
}
void ComplexFigure::draw()
	{
		triangle->draw();
		circle->draw();
	}
