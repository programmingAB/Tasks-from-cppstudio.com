/*
�������� ���������, ������������� ���, �������, �������� � ����� ������ �������� � ��������� �������� ������ � ��������� ����:
   ********************************
   * ������������ ������ � 1      *
   * ��������(�): ��. ��. ��-123  *
   * ������ ������ ��������       *
   ******************************** 
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string nLR, group, NameSurname;
	int maxL = 0;
	cout << "������� ����� ������������ ������ �: ";
	cin >> nLR;
	cout << "������� ����� ������: ";
	cin >> group;
	cout << "������� ���: ";
	cin.ignore();
	getline (cin, NameSurname);
	nLR = "������������ ������ �" + nLR;
	group = "��������(�): ��. ��. " + group;
	int* massLength = new int[3];
	massLength[0] = nLR.length();
	massLength[1] = group.length();
	massLength[2] = NameSurname.length();

	for (int j = 0; j < 2; j++)
		for (int i = 1; i >= j; i--)
			if (massLength[i] < massLength[i + 1])
			{
				int temp = massLength[i];
				massLength[i] = massLength[i + 1];
				massLength[i + 1] = temp;
			}
	maxL = massLength[0];
	delete[] massLength;
	/*for (int i = 0; i < 3; i++)
		cout << massLength[i] << endl;*/
	cout << "\t\t\t\t\t";
	for (int i = 0; i < maxL + 4; i++)
		cout << "*";
	cout << endl;
	cout << "\t\t\t\t\t* " << left << setw(maxL) << nLR << " *" << endl;
	cout << "\t\t\t\t\t* " << left << setw(maxL) << group << " *" << endl;
	cout << "\t\t\t\t\t* " << left << setw(maxL) << NameSurname << " *" << endl;
	cout << "\t\t\t\t\t";
	for (int i = 0; i < maxL + 4; i++)
		cout << "*";
	
}