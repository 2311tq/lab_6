#include"Circle.h"
#include"Triangle.h"
#include"ComplexFigure.h"
#include"Deque.h"
#include"Exceptions.h"
const int NotUsed = system("color F0");
int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleTitle((LPCWSTR)L"23VP2_8");
	try {
		Deque  dq;
		Circle circle (100, 400, 50, RGB(0, 255, 255), RGB(0, 0, 255));
		Triangle triangle(100, 200, 60, RGB(0, 0, 0), RGB(255, 0, 0));
		ComplexFigure comp(300, 300, 35, 85, RGB(255, 0, 0), RGB(0, 0, 255), RGB(0, 255, 128), RGB(128, 76, 178)); 
		//comp.draw();
		//Sleep(1500);
		//comp.move(150, 300);
		//Sleep(1000);
		//comp.hide();
		//Sleep(1000);
		dq.add(new Circle(280, 200, 60, RGB(0, 255, 255), RGB(0, 0, 255)));
		dq.add(new Triangle (100, 200, 60, RGB(0, 0, 0), RGB(255, 0, 0)));
		dq.add(new ComplexFigure(300, 300, 35, 85, RGB(255, 0, 0), RGB(0, 0, 255), RGB(0, 255, 128), RGB(128, 76, 178)));
		dq.print();
		Sleep(1000);
		ComplexFigure comp2(300, 300, 35, 85, RGB(255, 0, 0), RGB(0, 0, 255), RGB(0, 255, 128), RGB(128, 76, 178));
		comp2.move(150, 200);
		Sleep(1000);
		dq.clear();
	}
	catch (Exception ex) {
		cout << ex.getErr() << endl;
	}
	
	COORD p = { 1,35 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
