//BAEKJOON_25314

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    n /= 4;

    for (int i = 0; i < n; i++)
        printf("long ");
    printf("int");

    return 0;
}