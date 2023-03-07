//BAEKJOON_11050

#include<stdio.h>

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);

    int asw = 1;
    for (int i = n; i > (n - k); i--)
        asw *= i;
    for (int i = 1; i <= k; i++)
        asw /= i;

    printf("%d", asw);

    return 0;
}