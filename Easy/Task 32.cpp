/*
��������� ������� � ������� �� 1-�� �� 6-�� �������������� �������������, � ����������� �� ���� ����� ����� ������ ������������. 
��������, ���� �� ���� � ��������� ����� ���������� ����� 3, �� ���������� ���������� 3 ������������, 
���� ������������ ������ 6, �� ���������� 6-�� �������������. 
������������ ����� �������� �� � �������, � � �������. ��� ���� ������ ������������� ����� ����������� �� ���������� ������������� �����. ��� � � �������, ���� ������������ ������ ����� 3, �� ������ ������������ ��� �������������� ������������, ������ ������� ����� � 3-�. 
��� ������ ������������� ����� ������� ����� ������, ��� ��� ������, � ������������ ������� ������������ ������ ��������� � *.
*/

#include <iostream>
using namespace std;

class triangles
{
public:
	int numberOfTriangles;
	int lengthOfTriangle(int);

	void printT();
	triangles(int n) { numberOfTriangles = n; };
};



int main()
{
	int n=0;
	cout << "Enter number of triangles: "; cin >> n;
	triangles first(n);
	first.printT();
	return 0;
}

int triangles::lengthOfTriangle(int n)
{
	if (n==1)
		return 1;
	else
		return 2 + lengthOfTriangle(n - 1);
}

void triangles::printT()
{
	int lengthOfField = lengthOfTriangle(numberOfTriangles)* numberOfTriangles +(numberOfTriangles -1);
	int* Tops_of_triangels = new int[numberOfTriangles];
	Tops_of_triangels[0] = numberOfTriangles -1; // ������ ������� ����� �������
	for (int i = 1; i < numberOfTriangles; i++)
		Tops_of_triangels[i] = Tops_of_triangels[i-1] + numberOfTriangles * 2 ;
	for (int q=0; q< numberOfTriangles; q++)
	{
		for (int i = 0; i < lengthOfField; i++)
		{
			for (int j = 0; j < numberOfTriangles; j++)
			{
				for (int a = Tops_of_triangels[j] - q; a <= Tops_of_triangels[j] + q; a++)
				{
					if (i == a) 
					{
						cout << "*";
						i++;
					}
				}
			}
			cout << " ";
		}
		cout << endl;
	}
}