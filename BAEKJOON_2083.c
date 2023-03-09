//BAEKJOON_2083

#include<stdio.h>

int main()
{
    char a[12] = { 0 };
    int b = 0;
    int c = 0;

    while (1)
    {
        char a[12] = { 0 };
        int b = 0;
        int c = 0;
        scanf("%s %d %d", &a, &b, &c);

        if (a[0] == '#') break;

        printf("%s", a);
        if (b > 17 || c >= 80)
            printf(" Senior\n");
        else printf(" Junior\n");
    }

    return 0;
}
