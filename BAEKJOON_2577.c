//BAEKJOON_2577

#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);
    int sum = a * b * c;
    int arr[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        if (sum == 0) break;
        int rtm = sum % 10;
        arr[rtm] = arr[rtm] + 1;
        sum = sum / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}