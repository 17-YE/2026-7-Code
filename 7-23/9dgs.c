#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	
	for (int i = 1;i <= 100;i++)
	{
		if (i % 10 == 9)
		{
			a++;
		}
		if (i / 10 == 9)
		{
			a++;
		}
	}
	printf("%d", a);
	return 0;
}