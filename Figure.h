#pragma once
#include <iostream>
#include<windows.h>
#include<cmath>
#include <queue>
#include <list>
#include "Exceptions.h"
using namespace std;

class Figure {
protected:
    int x;
    int y;
    COLORREF Figure_color;
    COLORREF Figure_line_color;
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);
public:
    Figure(int _x, int _y,COLORREF _Figure_color = RGB(0,0,0),COLORREF _Figure_line_color = RGB(0,0,0)) :x(_x), y(_y), Figure_color(_Figure_color), Figure_line_color(_Figure_line_color) {}
    virtual void hide() = 0;
    virtual void draw() = 0;
    virtual void move(int new_x, int new_y) {
        hide();
        x = new_x;
        y = new_y;
        draw();
    }
};
