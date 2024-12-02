#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char N[10000];
	int B;
	int result = 0;
	int len;
	int digit = 0;
	scanf("%s %d", N, &B);
	len = strlen(N);

	for (int i = 0; i < len; i++)
	{
		if (N[i] >= '0' && N[i] <= '9')
		{
			digit = (int)(N[i] - '0');
		}
		else if (N[i] >= 'A' && N[i] <= 'Z')
		{
			digit = (int)(N[i] - 'A') + 10;
		}
		result += digit * pow(B, len - 1 -i);
	}
	printf("%d", result);
	return 0;
}