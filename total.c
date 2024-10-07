#include <stdio.h>

int main(void)
{
	int sum = 0;
	int n;
	scanf_s("%d", &n);
	for(int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}