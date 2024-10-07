#include <stdio.h>

int main(void)
{
	int a, b, c;
	int prize = 0;
	int max = 0;

	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c && c == a)
		prize = 10000 + a * 1000;

	else if (a == b || c == a)
		prize = 1000 + a * 100;

	else if (b == c)
		prize = 1000 + b * 100;

	else
	{
		if (a > b && a > c)
			max = a;
		else if (b > a && b > c)
			max = b;
		else if (c > a && c > b)
			max = c;
		prize = max * 100;
	}
	printf("%d", prize);
	return 0;
}