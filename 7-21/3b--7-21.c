#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	for(int x=1; 100>=x;x++)
		if(x % 3==0)
		printf("%d ",x);
	return 0;
}