#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 int main()
{
	//存储值
	int num1 = 0;
	int num2 = 0;
	//输入2个值
	scanf("%d %d", &num1, &num2);

	//计算平均值
	double average = (num1 + num2) / 2.0;

	//打印结果
	printf("%.2f\n", average);

	return 0;
}