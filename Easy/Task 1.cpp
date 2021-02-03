/*
����� Y, ���� Y = X1 + X2 + � + Xn,   X = Z^3 - B + A^2 / tg^2?.
���������� X �������� ������������� ���������.
��� ������� X �������� Z, B, �, ? ������ (�������� ������������� ���������).
*/

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

int main()
{
	setlocale(LC_ALL, "Russian");
	int countX=0;
	cout << "���������� �: ";
	cin >> countX;
	double* mass = new double[countX];
	double summe = 0;
	for (int i = 0; i < countX; i++)
	{
		double Z=0, B=0, A=0, Be=0; //Be - ���� � ��������
		cout << "������� �������� ��� X" << i+1 << endl;
		cout << "Z: "; cin >> Z;
		cout << "B: "; cin >> B;
		cout << "A: "; cin >> A;
		cout << "Betta (�������): "; cin >> Be;
		mass[i] = pow(Z, 3) - B + pow(A, 2) / pow(tan(Be /** PI / 180*/), 2);
		summe += mass[i];
	}
	cout << summe << endl;


	return 0;
}