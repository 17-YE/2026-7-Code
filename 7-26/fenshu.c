#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double sum = 0;
	int flg = 1;
	for (int i = 1;i <= 100;i++)
	{
		sum = sum + 1.0 / i * flg;
		flg = -flg;
	}
	printf("%lf", sum);
		return 0;
}