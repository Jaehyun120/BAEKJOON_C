//BAEKJOON_11720

#include<stdio.h>

int main()
{
    int n = 0;
    scanf(" %d", &n);

    int arr[1000];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}