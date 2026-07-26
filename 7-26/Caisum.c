#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("-------------------------------\n");
	printf("----------  1. play    --------\n");
	printf("----------  0. exit    --------\n");
	printf("-------------------------------\n");
}

void game()
{
	int guess = 0;
	int count = 0;
	clock_t start = clock();
	int r = rand() % 100 + 1;
	while (1)
	{
		count++;
		printf("请输入你要猜的数字(第%d次):", count);
		scanf("%d", &guess);
		if (guess < r)
			printf("猜小了\n");
		else if (guess > r)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了！答案是：%d\n", r);
			printf("用时%.0f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
			break;
		}
		printf("当前已用时%.0f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
		if (count >= 5)
		{
			printf("很遗憾，5次机会用完了！答案是：%d\n", r);
			printf("用时%.0f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();

		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}
