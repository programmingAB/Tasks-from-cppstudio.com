/*
��������� ���������, ������� �� ����� ������ �������� ������������������ ����, 
����� ����  ��������� ���������� �����, ���������� ����� ������� ���� ������������.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int seqNum = 0;
	char sequence[100];
	cout << "Input a sequence of numbers: "; cin >> sequence;
	do {
		cout << "Input the sequence number: "; cin >> seqNum;
	} while (seqNum > strlen(sequence));
	cout << sequence[seqNum - 1];
	return 0;
}