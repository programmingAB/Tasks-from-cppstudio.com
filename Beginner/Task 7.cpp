/*
��������� ���� �������� ������ cout, ��������� ������ ���������� ������������� ����������� �� �������� ����� ���� +
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int lineCount = 0;
	cout << "������� ���������� ""�����"" ������������: ";
	cin >> lineCount;
	for (int i = 1; i <= lineCount; i++)
	{
		int j = 1;
		while (j <= i)
		{
			cout << "+";
			j++;
		}
		cout << endl;
	}
}