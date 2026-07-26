#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 24;
	int b = 18;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("%d\n", b);
	return 0;
}