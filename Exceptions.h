#pragma once
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
class Exception {
private:
	string error;
	string figure;
	int x, y, r;
public:
	Exception(string _figure, int _x, int _y, int _r) : figure(_figure), x(_x), y(_y), r(_r) {};
	string getErr() {
		if ((figure == "Окружность") && (x < 0 || y < 0)) {
			error = "Ошибка при построении окружности с координатами: " + to_string(x) + ',' + to_string(y) + " и радиусом: " + to_string(r) + " (отрицательные координаты)";
		}
		else if ((figure == "Окружность") && (x > 0 && y > 0)) {
			error = "Ошибка при построении окружности с координатами : " + to_string(x) + ',' + to_string(y) + " и радиусом: " + to_string(r) + " (выход за границы окна)";
		}
		if ((figure == "Треугольник") && (x < 0 || y < 0)) {
			error = "Ошибка при построении треугольника с координатами: " + to_string(x) + ',' + to_string(y) + " и длиной основания: " + to_string(r) + " (отрицательные координаты)";
		}
		else  if ((figure == "Треугольник") && (x > 0 && y > 0)) {
			error = "Ошибка при построении треугольника с координатами : " + to_string(x) + ',' + to_string(y) + " и длиной основания: " + to_string(r) + " (выход за границы окна)";

		}
		return error;
	}
};