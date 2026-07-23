#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()

{
	int arr[10] = {1,21,34,67,47,94,56,34,64,10};
	int max = arr[0];

	for (int i = 1;i < 10;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}printf("max = %d\n", max);

	return 0;
}