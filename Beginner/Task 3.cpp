/*
�������� ���������, ������� ��������� ������������ ������ � ������� ��������� ����� ������� ��������, 
��������� � � ������� ������� � ��������� ������� � �������.
*/

#include <iostream>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	// 1 ������� -  toupper();
	// cout<<char(toupper(letter);
	// 2 �������
	if (letter >= 'a' && letter <= 'z')
		cout << char(letter+('A'-'a')); // ��� �� letter-('a'-'A')
}