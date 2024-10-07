#include <stdio.h>
#include <string.h>

int a;

int main(void)
{
	char c[100] = "";
	scanf("%s", c);
	a = strlen(c);
	printf("%d", a);
	return 0;
}