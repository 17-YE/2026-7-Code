#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("ÇëÊäÈëÊı×Ö");
	scanf("%d %d %d", &a, &b, &c);
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