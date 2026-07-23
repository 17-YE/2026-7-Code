#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        if ((a % 5) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}