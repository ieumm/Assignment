#include <stdio.h>
#define Number 9

int n;

int main(void)
{
	scanf_s("%d", &n);
	for (int i = 1; i <= Number; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}