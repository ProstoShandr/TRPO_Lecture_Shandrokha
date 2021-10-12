#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int number = rand() % (999 - 100 + 1) + 100;
	cout << "Число = " << number << endl;

	int s, d, e, rebmun, n, i = 1, count;
	s = number / 100;
	d = number % 100 / 10;
	e = number % 10;
	rebmun = e * 100 + d * 10 + s;
	cout << rebmun << endl;

	double srg;
	srg = pow(s * d * e, 1. / 3);
	cout << "Среднее геометрическое равно " << srg << endl;

	n = s % 2 + d % 2 + e % 2;
	cout << "Количество чётных цифр:  ";
	switch (n)
	{
	case 0:
		cout << "3\n";
		break;
	case 1:
		cout << "2\n";
		break;
	case 2:
		cout << "1\n";
		break;
	case 3:
		cout << "0\n";
		break;

	}

	cout << "Все простые числа в интервале:  ";
	int cnt = 1;
	do
	{
		i++;
		count = i;
		int cnt = 1;
		do
		{
			cnt++;

		} while (count % cnt != 0 && cnt <= pow(count, 1. / 2));
		if (count % cnt != 0)
		{
			cout << count << "   ";
		}

	} while (i <= number);


	cout << " " << endl;

	switch (s)
	{
	case 1:
		cout << "Сто  ";
		break;
	case 2:
		cout << "Двести  ";
		break;
	case 3:
		cout << "Триста  ";
		break;
	case 4:
		cout << "Четыреста  ";
		break;
	case 5:
		cout << "Пятьсот  ";
		break;
	case 6:
		cout << "Шестьсот  ";
		break;
	case 7:
		cout << "Семьсот  ";
		break;
	case 8:
		cout << "Восемьсот ";
		break;
	case 9:
		cout << "Девятьсот ";
		break;
	}
	if (d == 1)
	{
		switch (e)
		{
		case 1:
			cout << "одиннадцать";
			break;
		case 2:
			cout << "двеннадцать";
			break;
		case 3:
			cout << "тринадцать";
			break;
		case 4:
			cout << "четырнадцать";
			break;
		case 5:
			cout << "пятнадцать";
			break;
		case 6:
			cout << "шестнадцать";
			break;
		case 7:
			cout << "семнадцать";
			break;
		case 8:
			cout << "восемьнадцать";
			break;
		case 9:
			cout << "девятнадцать";
			break;

		}
	}
	else {
		switch (d)
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать  ";
			break;
		case 4:
			cout << "сорок  ";
			break;
		case 5:
			cout << "пятьдесят  ";
			break;
		case 6:
			cout << "шестьдесят  ";
			break;
		case 7:
			cout << "семдесят  ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяноста ";
			break;
		}

		switch (e)
		{
		case 1:
			cout << "один";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре  ";
			break;
		case 5:
			cout << "пять  ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь  ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}
	}
	cout << "Приложение №1\n";

	return 0;
}