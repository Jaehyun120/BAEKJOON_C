//BAEKJOON_15818

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf(" %d %d", &n, &m);

    int arr[100];
    for (int i = 0; i < n; i++)
        scanf(" %d", &arr[i]);

    long long asw = arr[0];
    for (int i = 1; i < n; i++)
        asw = (asw % m) * (arr[i] % m);


    printf("%u", asw % m);

    return 0;
}