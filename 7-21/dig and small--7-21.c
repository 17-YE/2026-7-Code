#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int c = 1;
	if (a < b)
	{
		int z = a;
		a = b;
		b = z;
	}
	if (a < c)
	{
		int z = a;
		a = c;
		c = z;
	}
	if (b < c)
	{
		int z = b;
		b = c;
		c = z;
	}
	printf("%d %d %d ", a, b, c);
	return 0;
}