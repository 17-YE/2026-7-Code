#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };

    for (int i = 0;i < n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m;i++)
    {
        scanf("%d", &arr2[i]);
    }
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < m)
    {
        printf("%d ", arr2[j]);
        j++;
    }
    return 0;
}