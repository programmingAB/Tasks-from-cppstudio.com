/*
��������� ������ �������� ����� ����������� ���� �����. ���� ��������� ���������: 
y = ax2 + bx + c � y = dx + k. ��� �� ��� ����� ������, ��� ��������� �����, 
��� a, b, c, d, k � ��� �����, ������� �������� � ����������. ���������� ����� �������� ����.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a=0, b=0, c=0, d=0, k=0, D=0;
	cout << "y = ax^2 + bx + c\nInput a: "; cin >> a; 
	cout<< "Input b : "; cin >> b; 
	cout << "Input c : "; cin >> c;
	cout << "y = dx + k\nInput d: "; cin >> d; 
	cout << "Input k : ";  cin >> k;
	D = pow(b - d, 2) - 4 * a * (c - k);
	if (D < 0)
		cout << "Point of intersection don't exist";
	else if (D == 0)
	{
		double x = (-b + d) / (2 * a);
		double y = d * x + k;
		cout << "Point of intersection: " << "[" << x << "," << y << "]" << endl;
	}
	else
	{
		double x1= ((-b + d) - sqrt(D)) / (2 * a);
		double x2 = ((-b + d) + sqrt(D)) / (2 * a);
		double y1 = d * x1 + k;
		double y2 = d * x2 + k;
		cout << "First point of intersection: " << "[" << x1 << ", " << y1 << "]" << endl;
		cout << "Second point of intersection: " << "[" << x2 << ", " << y2 << "]" << endl;
	}
	return 0;
}

