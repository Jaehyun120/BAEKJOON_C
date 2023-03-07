//BAEKJOON_15829

#include<stdio.h>

int main()
{
    int r = 31;
    int m = 1234567891;
    int n = 0;
    scanf(" %d", &n);

    char arr[51] = { 0 };
    scanf(" %s", &arr);

    int narr[50] = { 0 };
    for (int i = 0; i < n; i++)
        narr[i] = (int)arr[i] - 96;

    long long h[50] = { 0 };
    h[1] = narr[n - 1];
    for (int i = 2; i <= n; i++)
        h[i] = (narr[n - i] + r * h[i - 1]) % m;

    printf("%u", h[n]);

    return 0;
}