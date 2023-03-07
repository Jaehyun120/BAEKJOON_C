//BAEKJOON_14681

#include<stdio.h>

int main()
{
    int a = 0;
    while (a < -1000 || a>1000 || a == 0)
    {
        scanf("%d", &a);
    }
    int b = 0;
    while (b < -1000 || b>1000 || b == 0)
    {
        scanf("%d", &b);
    }

    if (a > 0)
    {
        if (b > 0) printf("1");
        else printf("4");
    }
    else
    {
        if (b > 0) printf("2");
        else printf("3");
    }

    return 0;
}