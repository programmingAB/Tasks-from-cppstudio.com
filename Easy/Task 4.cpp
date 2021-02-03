
/*
�������� ��������� , � ������� �� �������� ��������� �������� V � ������� ������ ���� T
������������ ���� a���� ��� ������� ���� ������� �� ��������� � ���������
(�������������� ������������ a = arcsin(gT/2V) ).
*/

#include <iostream>
#include <cmath>
using namespace std;

#define g 9.8

int main()
{
	setlocale(LC_ALL, "Russian");
	int V = 0, T = 0;
	cout << "������� V: ";
	cin >> V;
	cout << "������� T: ";
	cin >> T;
	cout << "����: " << asin(g * T / (2 * V)) * 180 / 3.14;
	return 0;
}