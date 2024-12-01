#pragma once
#include<iostream>
#include<string>
using namespace std;
class Exception {
private:
	string error;
	string figure;
	int x, y, r;
public:
	Exception(string fig, int x = 0, int y = 0, int r = 0) : figure(figure), x(x), y(y), r(r) {};
	string getErr() {
		if (figure == "Круг") {
			error = "Ошибка при построении окружности с координатами: " + to_string(x) + ',' + to_string(y) + " и радиусом:"
				+to_string(r);
		}
		else if (figure == "Треугольник") {
			error = "Ошибка при построении треугольника с координатами: " + to_string(x) + ',' + to_string(y) + " и стороной:"
				 + to_string(r);
		}
		else if (figure == "Complex") {
			error = "Ошибка при построении сложной фигуры с координатами: " + to_string(x) + ',' + to_string(y) + 
				",радиусом вписанной окружности : " + to_string(r)+" и стороной треугольника : "+to_string(2*sqrt(3)*r);
		}
		else {
			error = figure;
		}
		return error;
	}
};