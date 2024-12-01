#include"Circle.h"
void Circle::hide()
{
	HPEN hPen = CreatePen(PS_SOLID, 2, RGB(128, 128, 128));
	HBRUSH hBrush = CreateSolidBrush(RGB(128, 128,128));
	SelectObject(hdc, hPen); SelectObject(hdc, hBrush);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}
void Circle::draw()
{
	HWND console = GetConsoleWindow();
	RECT console_rect;
	GetWindowRect(console, &console_rect);
	int console_width = console_rect.right - console_rect.left;
	int console_height = console_rect.bottom - console_rect.top;
	if (x<0 || y<0 || x + radius > console_width || y + radius > console_height)
	{
		throw Exception("Окружность", x, y, radius);
	}
	HPEN hPen = CreatePen(PS_SOLID, 2, Figure_color);
	HBRUSH hBrush = CreateSolidBrush(Figure_line_color);
	SelectObject(hdc, hPen); SelectObject(hdc, hBrush);
	Ellipse(hdc, x + radius, y + radius, x - radius, y - radius);
}
