#include <stdio.h>

int main(void)
{
	int a, b, v;
	int days;
	scanf_s("%d %d %d", &a, &b, &v);

	days = (v - b - 1) / (a - b) + 1;
	printf("%d ", days);

	return 0;
}

