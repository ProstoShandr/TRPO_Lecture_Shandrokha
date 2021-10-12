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
	cout << "×čńëî = " << number << endl;

	int s, d, e, rebmun, n, i = 1, count;
	s = number / 100;
	d = number % 100 / 10;
	e = number % 10;
	rebmun = e * 100 + d * 10 + s;
	cout << rebmun << endl;

	double srg;
	srg = pow(s * d * e, 1. / 3);
	cout << "Ńđĺäíĺĺ ăĺîěĺňđč÷ĺńęîĺ đŕâíî " << srg << endl;

	n = s % 2 + d % 2 + e % 2;
	cout << "Ęîëč÷ĺńňâî ÷¸ňíűő öčôđ:  ";
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

	cout << "Âńĺ ďđîńňűĺ ÷čńëŕ â číňĺđâŕëĺ:  ";
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
		cout << "Ńňî  ";
		break;
	case 2:
		cout << "Äâĺńňč  ";
		break;
	case 3:
		cout << "Ňđčńňŕ  ";
		break;
	case 4:
		cout << "×ĺňűđĺńňŕ  ";
		break;
	case 5:
		cout << "Ď˙ňüńîň  ";
		break;
	case 6:
		cout << "Řĺńňüńîň  ";
		break;
	case 7:
		cout << "Ńĺěüńîň  ";
		break;
	case 8:
		cout << "Âîńĺěüńîň ";
		break;
	case 9:
		cout << "Äĺâ˙ňüńîň ";
		break;
	}
	if (d == 1)
	{
		switch (e)
		{
		case 1:
			cout << "îäčííŕäöŕňü";
			break;
		case 2:
			cout << "äâĺííŕäöŕňü";
			break;
		case 3:
			cout << "ňđčíŕäöŕňü";
			break;
		case 4:
			cout << "÷ĺňűđíŕäöŕňü";
			break;
		case 5:
			cout << "ď˙ňíŕäöŕňü";
			break;
		case 6:
			cout << "řĺńňíŕäöŕňü";
			break;
		case 7:
			cout << "ńĺěíŕäöŕňü";
			break;
		case 8:
			cout << "âîńĺěüíŕäöŕňü";
			break;
		case 9:
			cout << "äĺâ˙ňíŕäöŕňü";
			break;

		}
	}
	else {
		switch (d)
		{
		case 2:
			cout << "äâŕäöŕňü ";
			break;
		case 3:
			cout << "ňđčäöŕňü  ";
			break;
		case 4:
			cout << "ńîđîę  ";
			break;
		case 5:
			cout << "ď˙ňüäĺń˙ň  ";
			break;
		case 6:
			cout << "řĺńňüäĺń˙ň  ";
			break;
		case 7:
			cout << "ńĺěäĺń˙ň  ";
			break;
		case 8:
			cout << "âîńĺěüäĺń˙ň ";
			break;
		case 9:
			cout << "äĺâ˙íîńňŕ ";
			break;
		}

		switch (e)
		{
		case 1:
			cout << "îäčí";
			break;
		case 2:
			cout << "äâŕ ";
			break;
		case 3:
			cout << "ňđč ";
			break;
		case 4:
			cout << "÷ĺňűđĺ  ";
			break;
		case 5:
			cout << "ď˙ňü  ";
			break;
		case 6:
			cout << "řĺńňü ";
			break;
		case 7:
			cout << "ńĺěü  ";
			break;
		case 8:
			cout << "âîńĺěü ";
			break;
		case 9:
			cout << "äĺâ˙ňü ";
			break;
		}
	}
	cout << "Ďđčëîćĺíčĺ š1\n";
	
	cout << "Приложение №2 с помощью Git\n";

	return 0;
}
