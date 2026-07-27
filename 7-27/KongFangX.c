#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < n;j++)
            {
                if (j == 0 || j == n - 1)
                {
                    printf("* ");
                }
                else if (i == 0 || i == n - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");

                }
            }
            printf("\n");
        }
    }
    return 0;
}