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
		if ((figure == "����������") && (x < 0 || y < 0)) {
			error = "������ ��� ���������� ���������� � ������������: " + to_string(x) + ',' + to_string(y) + " � ��������: " + to_string(r) + " (������������� ����������)";
		}
		else if ((figure == "����������") && (x > 0 && y > 0)) {
			error = "������ ��� ���������� ���������� � ������������ : " + to_string(x) + ',' + to_string(y) + " � ��������: " + to_string(r) + " (����� �� ������� ����)";
		}
		if ((figure == "�����������") && (x < 0 || y < 0)) {
			error = "������ ��� ���������� ������������ � ������������: " + to_string(x) + ',' + to_string(y) + " � ������ ���������: " + to_string(r) + " (������������� ����������)";
		}
		else  if ((figure == "�����������") && (x > 0 && y > 0)) {
			error = "������ ��� ���������� ������������ � ������������ : " + to_string(x) + ',' + to_string(y) + " � ������ ���������: " + to_string(r) + " (����� �� ������� ����)";

		}
		return error;
	}
};