/*
� ��������� �����, ���������� ����� ��������� �� ����� ��, ��������� ������������ ������������� � ������������� �������� ������ { � }.
��������� �������� ������� �� ����� � �������� � ���� ����� � ��������� ����. 
��������� ������ ��������� (�����) ��������� � ��������� ��������� ���� (��������, "out . txt " ), ������������� �� ������.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int left_brackets = 0, right_brackets =0;
	char buff[100];
	ifstream Ifile("in.txt", ios_base::in);
	ofstream Ofile("out.txt");

	if (!Ifile)
	{
		cout << "In.txt can't be opened.";
		return 0;
	}

	while (Ifile.getline(buff, 100))
	{
		//cout << buff << endl;
		int i = 0;
		while (*(buff + i)!='\0')
		{
			if (*(buff + i) == '{')
				left_brackets++;
			else if (*(buff + i) == '}')
				right_brackets++;
			i++;
		}
	}
	Ifile.close();
	Ofile << "Count of left brackets: "<< left_brackets << endl << "Count of right brackets: " << right_brackets <<endl;
	Ofile.close();
	return 0;
}