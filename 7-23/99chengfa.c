#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	
		int i = 1;
		for (;i <= 9;i++)
		{
			int j = 1;
			for (;j <= i;j++)
			{
				printf("%d*%d=%d", j, i, i * j);
			}
		
		printf("\n");
	}
		return 0;
}