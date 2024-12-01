#pragma once
#include"Circle.h"
#include"Triangle.h"
#include<iostream>
using namespace std;
class ComplexFigure : public Figure {
private:
	int radius;
	int a;
	Circle* circle;
	Triangle* triangle;
public:
	~ComplexFigure();
	ComplexFigure(int x, int y, int _radius, int _a, COLORREF Figure_color = RGB(0, 0, 0), COLORREF Figure_line_color = RGB(0,
		0, 0), COLORREF Figure_color_1 = RGB(0, 0, 0), COLORREF Figure_line_color_1 = RGB(0, 0, 0)) : Figure(x, y,
			Figure_color, Figure_line_color), radius(_radius), a(_a) {
		circle = new Circle(x, y, radius, Figure_color, Figure_line_color);
		triangle = new Triangle(x, y, a, Figure_color_1, Figure_line_color_1);
	}
	void hide() override;
	void move(int x, int y);
	void draw() override;
};

