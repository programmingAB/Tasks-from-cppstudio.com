#include "myfunctions.h"


//Определение длинны строки, функция должна возвращать количество символов входной строки.
int lengthString(char* string) {
	int count = 0;
	while (*(string + count) != '\0')
		count++;
	return count;
}

//Функция переворачивает строку и возвращает указатель на перевёрнутую строку
char* reverseString(char* string) {
	int length = lengthString(string);
	char* copy = new char[length + 1];
	*(copy + length) = '\0';
	for (int i = 0; i < length; i++)
		*(copy + length - i - 1) = *(string + i);
	for (int i = 0; i < length; i++)
		*(string + i) = *(copy + i);
	delete[] copy;
	return string;
}

//Функция для проверки баланса скобок, то есть количество открытых скобок 
//должно совпадать с количеством закрытых, причём необходимо отличать тип 
//скобочек — круглые, квадратные, фигурные. 
//Функция возвращает значение типа int, если 0 — баланс скобок нарушен, 
//если 1 — баланс скобок выдержан, если -1 скобок во входной строке нет.
int balanceBrackets(char* string) {
	int i = 0;
	int numberReturn = -1;
	int c_L_Sq_Br = 0;//[
	int c_R_Sq_Br = 0;//]
	int c_L_R_Br = 0;//(
	int c_R_R_Br = 0;//)
	int c_L_Brace = 0;//{
	int c_R_Brace = 0;//}
	while (*(string + i) != '\0')
	{
		if (*(string + i) == '[')
			c_L_Sq_Br++;
		else if (*(string + i) == ']')
			c_R_Sq_Br++;
		else if (*(string + i) == '(')
			c_L_R_Br++;
		else if (*(string + i) == ')')
			c_R_R_Br++;
		else if (*(string + i) == '{')
			c_L_Brace++;
		else if (*(string + i) == '}')
			c_R_Brace++;
		i++;
	};
	/*cout << "[: " << c_L_Sq_Br << endl;
	cout << "]: " << c_R_Sq_Br << endl;
	cout << "(: " << c_L_R_Br << endl;
	cout << "): " << c_R_R_Br << endl;
	cout << "{: " << c_L_Brace << endl;
	cout << "}: " << c_R_Brace << endl;*/
	if ((c_L_Sq_Br == c_R_Sq_Br) && (c_L_R_Br == c_R_R_Br) && (c_L_Brace == c_R_Brace))
		numberReturn = 1;
	else if (c_L_Sq_Br + c_R_Sq_Br + c_L_R_Br + c_R_R_Br + c_L_Brace + c_R_Brace == 0)
		numberReturn = -1;
	else numberReturn = 0;

	return numberReturn;
}

//Функция должна возвращать номер позиции. начиная с которой подстрока входит в строку.
int occurenceSubstring(char* string1, char* string2) { // only string1>string2
	int i = 0;
	while (*(string1 + i) != '\0') {
		int j = 0;
		while (*(string2 + j))
		{
			if (*(string1 + j + i) != *(string2 + j))
				break;
			if (*(string2 + j + 1) == '\0')
				return i + 1;
			++j;
		}
		++i;
	}
	return -1;
}

//Функция конкатенации строк, но конкатенация выполняется начиная с n-й позиции так, 
//что вторая строка вставляется в первую строку не удалив ни одного из символов первой строки. 
//Возвращаемое значение — строка, полученная после вставки второй в первую строки. 
char* insertnString(char* string1, char* string2, int num) {
	int length_of_string3 = lengthString(string1) + lengthString(string2) + 1; // + \0
	char* string3 = new char[length_of_string3];
	*(string3 + length_of_string3) = '\0';
	int i = 0, j = 0, z = 0;
	while (*(string3 + i))
	{
		if (i == num - 1)
		{
			while (*(string2 + j))
			{
				*(string3 + i) = *(string2 + j);
				++i;
				++j;
			}
		}
		*(string3 + i) = *(string1 + z);
		++i;
		++z;
	}
	cout << &string3 << endl;
	return string3;
}

//Функция должна скопировать часть входной строки (k символов), начиная с позиции с номером n.
char* сutString(char* string1, int k, int n) {
	char* string2 = new char[k+1];
	*(string2 + k) = '\0';
	int i = 0;
	while (i!=k && *(string1 + n - 1) != '\0')
	{
		*(string2 + i) = *(string1 + n - 1);
		i++;
		n++;
	}
	return string2;
}