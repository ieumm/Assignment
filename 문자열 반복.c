#include <stdio.h>
#include <string.h>


int main(void)
{
	int n;
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int r;
		char s[20];
		scanf("%d %s", &r, s);

		for (int j = 0; j < strlen(s); j++)
		{
			for (int k = 0; k < r; k++)
				printf("%c", s[j]);
		}
		printf("\n");
	}
	return 0;
}