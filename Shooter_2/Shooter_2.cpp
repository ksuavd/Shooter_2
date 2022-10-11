// Shooter_2.cpp
#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

//#define ASCII
#define FIBONACCI_ONE
//#define FIBONACCI_TWO
//#define NUMBERS 
int main()
{
	setlocale(LC_ALL, "rus");
#ifdef ASCII
	cout << "  ---Таблица ASCII-символов---\n" << endl;
	
	for (int i = 33; i <= 255; i++) //до 33 символа находятся управляющие символы
	{
		cout <<(char)i << " ";
		if (i % 16==0)cout << endl;
	}
#endif
#ifdef FIBONACCI_ONE
	cout << "---Ряд Фибоначчи---\n" << endl;
	int a = 0; int b = 0; int c = 1; int number = 0;
	do 
	{
		cout << "Введите число: "; cin >> number;
		if (number < 0)
		{
			cout << "\nЧисло должно быть положительное! Повторите ввод!\n" << endl;
		}
	} while (number < 0);
	
	for (int i = 0; i < number; i++) 
	{	
		a = b;
		b = c;
		c = a + b;
		cout  << a << endl;
	}
#endif
#ifdef FIBONACCI_TWO
	cout << "---Ряд Фибоначчи до указанного предела---\n" << endl;
	int a = 0; int b = 0; int c = 1; int number = 0;
	do
	{
		cout << "Введите предел вывода: "; cin >> number;
		if (number < 0)
		{
			cout << "\nЧисло должно быть положительное! Повторите ввод!\n" << endl;
		}
	} while (number < 0);

	for (int i = 0; i <= number; i++)
	{
		a = b;
		b = c;
		c = a + b;
		if (a >= number) break;
		cout << a << endl;
	}
#endif
#ifdef NUMBERS
	cout << "---Ряд простых чисел до указанного предела---\n" << endl;
	int number = 0; int rezult = 0; int count=0;
	do
	{
		cout << "Введите предел вывода: "; cin >> number;
		if (number < 0)
		{
			cout << "\nЧисло должно быть положительное! Повторите ввод!\n" << endl;
		}
	} while (number < 0);

	for (int i = 2; i < number; i++)
	{
		for (int j = 1; j < number; j++)
		{
			if (i % j == 0)// если делиться без остатка
				count++; //условие выполнено идем дальше
		}
		if (count <3) //если у числа 2 делителя 
		{
			rezult = i;
			cout << rezult << endl;
        }
		count = 0;//обнуляем счетчик перел заходом в цикл
	}
#endif
}
   


