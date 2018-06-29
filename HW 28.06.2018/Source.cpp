#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;


	cout << "Введите число 1-6 для вывода соответствующей фигуры: " << endl << "1 - в, 2 - г, 3 - д, 4 - е, 5 - ж, 6 - з" << endl;
	cout << "Либо переходите к заданиям 7-9" << endl << endl;

start:

	cout << "Задача № ";
	cin >> tn;

	switch (tn)
	{
		// Вывести на экран фигуры, заполненные звездочками. Диалог с пользователем реализовать при помощи меню.

	case 1:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i <= j && (i + j <= n - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
	}
	break;
	case 2:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i >= j && (i + j >= n - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 3:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i <= j && (i + j <= n - 1)) || (i >= j && (i + j >= n - 1))) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 4:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i <= j && (i + j >= n - 1)) || (i >= j && (i + j <= n - 1))) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 5:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i >= j && (i + j <= n - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 6:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i <= j && (i + j >= n - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 7:
	{
		// Вывести на экран ромб из зведочек

		int v;
		cout << "Введите параметр ромба (половину диагонали):" << endl;
		cin >> v;

		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v - i; j++)
			{
				cout << ' ';
			}

			for (int j = v - 2 * i; j <= v; j++)
			{
				cout << '*';
			}
			cout << endl;
		}
		for (int i = v; i >= 0; i--)
		{
			for (int j = 0; j < v - i; j++)
			{
				cout << ' ';
			}

			for (int j = v - 2 * i; j <= v; j++)
			{
				cout << '*';
			}
			cout << endl;
		}

		// вариант из аналогичных построений
		/*int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i >= j && (i + j >= n - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		int m = 9;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i <= j && (i + j <= m- 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}*/

	}
	break;
	case 8:
	{
		// Вывести на экран заданное количество чисел, кратных заданному

		int n;
		int k;
		cout << "Введите число, которому должны быть кратны запрашиваемые числа" << endl << "Сколько чисел, кратных заданному вывести?" << endl;
		cin >> n >> k;
		int x = 0;
		int number = 1;

		while(x!=k)
		{
			if (number % n == 0)
			{
				cout << number << "\t";
				x++;
			}
			number++;
		}
		cout << endl << endl;
	}
	break;
	case 9:
	{
		// Для двух чисел определить наименьшее общее кратное

		int a;
		int b;
		cin >> a >> b;
		
		if (a > b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}

		int i = 2;
		while (a >= i)
		{
			if (a%i == 0 && b%i == 0)
			{
				cout << "Наименьшее общее кратное: " << i << endl;
				break;
			}
			i++;
		}
		if (i > a) cout << "Числа не имеют НОК" << endl;
		cout << endl;
	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}