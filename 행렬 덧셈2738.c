#include <stdio.h>

int main(void)
{
	int n, m;
	int sum = 0;
	scanf("%d %d", &n, &m);

	int a[100][100];
	int b[100][100];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = a[i][j] + b[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}