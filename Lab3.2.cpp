/*
Lab_03.2
������ ������
����������� ������ � 3.2
������������, ������ ��������: ������� � �����������
������ 5
*/

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a;//cin
	double b;//cin
	double c;//cin
	double x;//cin
	double F;//���������

	cout << "������ a: " << endl; cin >> a;
	cout << "������ b: " << endl; cin >> b;	
	cout << "������ c: " << endl; cin >> c;
	cout << "������ x: " << endl; cin >> x;

	if (x < 0 && b != 0)
		F = a - x / (10 + b);
		

	if (x > 0 && b == 0)
		F = (x - a) / (x - c);


	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = 3 * x + 2 / c;
		

	
	cout << "��������� = " << F << endl;
	
}
