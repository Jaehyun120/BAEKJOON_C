//BAEKJOON_25238

#include<stdio.h>

int main()
{
    int a = 0;
    float b = 0;
    scanf("%d %f", &a, &b);

    b /= 100;

    if (a - a * b >= 100) printf("0");
    else printf("1");

    return 0;
}