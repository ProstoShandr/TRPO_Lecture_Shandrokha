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
	cout << "����� = " << number << endl;

	int s, d, e, rebmun, n, i = 1, count;
	s = number / 100;
	d = number % 100 / 10;
	e = number % 10;
	rebmun = e * 100 + d * 10 + s;
	cout << rebmun << endl;

	double srg;
	srg = pow(s * d * e, 1. / 3);
	cout << "������� �������������� ����� " << srg << endl;

	n = s % 2 + d % 2 + e % 2;
	cout << "���������� ������ ����:  ";
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

	cout << "��� ������� ����� � ���������:  ";
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
		cout << "���  ";
		break;
	case 2:
		cout << "������  ";
		break;
	case 3:
		cout << "������  ";
		break;
	case 4:
		cout << "���������  ";
		break;
	case 5:
		cout << "�������  ";
		break;
	case 6:
		cout << "��������  ";
		break;
	case 7:
		cout << "�������  ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}
	if (d == 1)
	{
		switch (e)
		{
		case 1:
			cout << "�����������";
			break;
		case 2:
			cout << "�����������";
			break;
		case 3:
			cout << "����������";
			break;
		case 4:
			cout << "������������";
			break;
		case 5:
			cout << "����������";
			break;
		case 6:
			cout << "�����������";
			break;
		case 7:
			cout << "����������";
			break;
		case 8:
			cout << "�������������";
			break;
		case 9:
			cout << "������������";
			break;

		}
	}
	else {
		switch (d)
		{
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "��������  ";
			break;
		case 4:
			cout << "�����  ";
			break;
		case 5:
			cout << "���������  ";
			break;
		case 6:
			cout << "����������  ";
			break;
		case 7:
			cout << "��������  ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}

		switch (e)
		{
		case 1:
			cout << "����";
			break;
		case 2:
			cout << "��� ";
			break;
		case 3:
			cout << "��� ";
			break;
		case 4:
			cout << "������  ";
			break;
		case 5:
			cout << "����  ";
			break;
		case 6:
			cout << "����� ";
			break;
		case 7:
			cout << "����  ";
			break;
		case 8:
			cout << "������ ";
			break;
		case 9:
			cout << "������ ";
			break;
		}
	}
	cout << "���������� �1\n";

	return 0;
}