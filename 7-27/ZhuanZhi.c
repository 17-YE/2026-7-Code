#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < m;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}