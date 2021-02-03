/*
���������, �� ��������� ������� pow, �������� ������� z(x,m) = x^m sin^m(xm), ��� �������� ����������:
	x �� -1.1 �� 0.3 � ����� 0.2;
	m �� 1 �� 5 � ����� 1.
*/

#include <iostream>
#include <cmath>
using namespace std;

//int ifEqualPower = 1;

int main()
{
	setlocale(LC_ALL, "Russian");
	for (double d=-1.1; d<0.3; d+=0.2)
	{
		cout << "x = " << d << endl;
		for (int power = 1; power < 5; power++)
		{
			static int ifEqualPower;
			ifEqualPower = 1;
			double partLeft = d; // ������ � ���� ���������� d � ������� 1, ������������ ��� ���������� d � ������� power
			double partRight = sin(d*power); // ���������� partRight, ������ ��� "������ �����" ���������

			while (power > ifEqualPower)
			{
				partLeft *= d;
				partRight *= sin(d * power);
				ifEqualPower++;
			}
			cout << "�������� ������� = " << partLeft * partRight <<" ��� m = "<<power<< endl;
		}
		cout << "----------------------------------\n";
	}
	return 0;
}

