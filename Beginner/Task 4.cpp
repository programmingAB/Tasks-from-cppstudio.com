/*
��������� ������ ���������� �����, ��������� � ���������� � ������, � ���������.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double meter, km;
	do {
		cout << "������� �����: ";
		cin >> meter;
		km = meter / 1000;
		// 1 ������� -  toupper();
		// cout<<char(toupper(letter);
		// 2 �������
		cout << "������� � ���������: " << endl;
		if (meter > 0 && meter < 1)
			cout << meter << " ����� - " << km << " ���������" << endl;
		else if (meter == 1)
			cout << meter << " ���� - " << km << " ���������" << endl;
		else if (meter > 1 && meter < 5)
			cout << meter << " ����� - " << km << " ���������" << endl;
		else if (meter >= 5 && meter < 1000)
			cout << meter << " ������ - " << km << " ���������" << endl;
		else if (meter > 1000)
			cout << meter << " ������ - " << km << " ����������" << endl;

	} while (meter != -1);
}