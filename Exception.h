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
		if (figure == "����") {
			error = "������ ��� ���������� ���������� � ������������: " + to_string(x) + ',' + to_string(y) + " � ��������:"
				+to_string(r);
		}
		else if (figure == "�����������") {
			error = "������ ��� ���������� ������������ � ������������: " + to_string(x) + ',' + to_string(y) + " � ��������:"
				 + to_string(r);
		}
		else if (figure == "Complex") {
			error = "������ ��� ���������� ������� ������ � ������������: " + to_string(x) + ',' + to_string(y) + 
				",�������� ��������� ���������� : " + to_string(r)+" � �������� ������������ : "+to_string(2*sqrt(3)*r);
		}
		else {
			error = figure;
		}
		return error;
	}
};