//BAEKJOON_2869

#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int v = 0;
    int d = 0;
    scanf("%d %d %d", &a, &b, &v);

    v -= a;
    d = v % (a - b);
    v /= (a - b);

    if (d == 0)
        printf("%d", v + 1);
    if (d != 0)
        printf("%d", v + 2);

    return 0;
}