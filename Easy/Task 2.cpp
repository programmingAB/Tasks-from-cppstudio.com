/*
����� �������������� ����� ��� ���������: 1k + 2k + 3k + � + Nk. N � ������� k ������ ������������. 
*/

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

int main()
{
	setlocale(LC_ALL, "Russian");
	int N = 0, sum=0, k=0;
	cout << "������� N: ";
	cin >> N;
	cout << "������� k: ";
	cin >> k;
	for (int i = 1; i <= N; i++)
		sum += pow(i, k);
	cout << "�����: " << sum;
	return 0;
}