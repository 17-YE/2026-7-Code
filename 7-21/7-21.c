#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
int main()
{
    int gpa = 90;
    int has_fail = 0;
    int has_warn = 0;

    if (gpa>= 85)
    {
        if (has_fail == 0)
        {
            if (has_warn == 0)
            {
                printf("恭喜获得奖学金。\n");
            }
            else
            {
                printf("警告处分，不能评奖。\n");
            }
        }
        else
        {
            printf("挂过科，不能评奖。");
        }
    }
    else
    {
        printf("绩点不够，继续努力。");
    }
    return 0;
}