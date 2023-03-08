//BAEKJOON_5597

#include<stdio.h>

int main()
{
    int arr[30] = { 0 };

    int n = 1;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        arr[n - 1] = 1;
    }

    for (int i = 0; i < 30; i++)
    {
        if (arr[i] == 1)
            continue;
        else printf("%d\n", i + 1);
    }

    return 0;
}