/*
������������ ���� ������������ ������������ ����� � ����������.
��������� ������ ���������� ���������� � ���������� �����, ������� ������ � ������ ������� ������������ �����.
*/

#include <iostream>
//#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0, n1 = 0, n2 = 0;;
	cout << "������� �����: "; cin >> number;
	n1 = number / 10;
	n2 = number % 10;
	if (n1 > n2)
		cout << n1 << " - ������� �����" << endl << n2 << " - ������� �����";
	else if (n1 < n2)
		cout << n2 << " - ������� �����" << endl << n1 << " - ������� �����";
	else
		cout << "����� �����";
	return 0;
}
