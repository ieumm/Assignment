#include <stdio.h>

int main(void)
{	
	int arr[100][100] = {0};
	int n;
	int a, b;
	int area = 0;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);


		for (int x = a; x < a + 10; x++)
		{
			for (int y = b; y < b + 10; y++)
			{
				arr[x][y] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
			{
				area++;
			}
		}
	}
	
	printf("%d\n", area);
	return 0;
}