#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main()
{
	int arr1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[SIZE] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (int i = 0; i < SIZE; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	printf("½»»»ºó:\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr2[i]);

	return 0;
}