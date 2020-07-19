/*
* Пользователь 	вводит с клавиатуры три числа.Посчитать 	их сумму, произведение и среднее 	арифметическое.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double a, b, c;
	cout << "Введите три числа : ";
	cin >> a >> b >> c;
	cout << "Сумма = " << a + b + c << endl;
	cout << "Произведение = " << a * b * c << endl;
	cout << "Среднее арифметическое = " << (a + b + c) / 3 << endl;
}
