/*
��������� ������ �������� ������� ��������� ����� �� 1 �� 5 (���������� ������������ ��������� � ������� �� ����� ������, 
��. ����������� �������). � ������ ������� ������ ���������� ����� �� 1 �� 5 �� ������ ������� � �������� ���� �����.
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cout << "Input the left and the right bounds of interval: "; cin >> a; cin >> b;
	cout << "Number" << "\t\t" << "Square\n";
	cout << "------" << "\t\t" << "-------\n";
	while (a != b+1)
	{
		cout << a << "\t\t" << a * a<<"\n";
		++a;
	}
	return 0;
}

