#include <stdio.h>

int total, totalGuess;
int n;
int price, number;


int main(void)

{
	scanf_s("%d", &total);
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &price, &number);
		totalGuess += price * number;
	}

	if (total == totalGuess)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}