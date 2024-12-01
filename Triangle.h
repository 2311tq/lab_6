#pragma once
#include"Figure.h"
#include<iostream>
using namespace std;
class Triangle : public virtual Figure {
protected:
	int a;
public:
	Triangle(int x, int y, int a, COLORREF Figure_color = RGB(0, 0, 0), COLORREF Figure_line_color = RGB(0, 0,
		0)) : Figure(x, y, Figure_color, Figure_line_color), a(a) {}
	void hide() override;
	void draw() override;
};