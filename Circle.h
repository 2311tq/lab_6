#pragma once
#include"Figure.h"
#include<iostream>
using namespace std;
class Circle : public virtual Figure {
protected:
	int radius;
public:
	Circle(int x, int y, int _radius, COLORREF Figure_color = RGB(0, 0, 0), COLORREF Figure_line_color = RGB(0, 0, 0)) :
		Figure(x, y, Figure_color, Figure_line_color), radius(_radius) {}
	void hide() override;
	void draw() override;
};