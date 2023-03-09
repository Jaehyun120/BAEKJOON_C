//BAEKJOON_2445

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j < n; j++)
        {
            printf("*");
        }

        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            if (i == n)
                break;
            printf(" ");
        }

        int z = 0;
        for (int j = n - i; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - i; j < n; j++)
        {
            printf("*");
        }

        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            printf(" ");
        }

        for (int j = n - i; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}