
/*
��������� �������� ���������� ���� ����, �������� � ����������, ���������� �� 5,���� ����� ��� ���� ���� �� ��� ������.
� ��������� ������ ������ ����� ������� ���.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "������� ��� �����: ";
	cin >> n1 >> n2 >> n3;
	if ((n1 - (n2 - n3)) == n1 || (n2 - (n1 - n3)) == n2 || (n3 - (n2 - n1)) == n3)
	{
		n1 += 5;
		n2 += 5;
		n3 += 5;
	}
	cout << "1 ����� - " << n1 <<endl << "2 ����� - " << n2 << endl << "3 ����� - " << n3;
	return 0;
}