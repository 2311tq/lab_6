#include <iostream>
#include "Triangle.h"

void Triangle::draw()
{
	HWND console = GetConsoleWindow();
	RECT console_rect;
	GetWindowRect(console, &console_rect);
	int console_width = console_rect.right - console_rect.left;
	int console_height = console_rect.bottom - console_rect.top;
	POINT points[] = { {x - a / 2.5, y - a * 0.60}, { x + a, y - a * 0.10 },  {x - a / 2.5, y + a * 0.70} };
	for (int i = 0; i < 3; i++) {
		if (points[i].x < 0 || points[i].x > console_width || (points[i].y < 0 || points[i].y > console_height))
		{
			throw Exception("Треугольник", x, y, a);
			break;
		}
	}
	HPEN hPen = CreatePen(PS_SOLID, 2, Figure_color);
	HBRUSH hBrush = CreateSolidBrush(Figure_line_color);
	SelectObject(hdc, hPen); SelectObject(hdc, hBrush);
	Polygon(hdc, points, 3);
}
void Triangle::hide() {
            HPEN hPen = CreatePen(PS_SOLID, 2, RGB(128, 128, 128));
            HBRUSH hBrush = CreateSolidBrush(RGB(128, 128, 128));
            SelectObject(hdc, hPen); SelectObject(hdc, hBrush);
			POINT points[] = { {x - a / 2.5, y - a * 0.60}, { x + a, y - a * 0.10 },  {x - a / 2.5, y + a * 0.70} };
            Polygon(hdc, points,3);
}
