#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)//100 101 102 103 104...
	{
		int flag = 1; //假设这次的i是素数
		//判断i是否为素数
		//产生2~i-1之间的数字
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}
		//2种情况
		//1. break -- i不是素数
		//2. 没有j能整除i, i是素数
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}