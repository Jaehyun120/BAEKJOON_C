//BAEKJOON_20413

#include<stdio.h>

int main()
{
    int n = 0;
    scanf(" %d", &n);

    int s = 0;
    int g = 0;
    int p = 0;
    int d = 0;
    scanf(" %d %d %d %d", &s, &g, &p, &d);

    char arr[36] = { 0 };
    scanf(" %s", &arr);

    int sum = 0;
    int yst = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'B')
            yst = s - yst - 1;
        if (arr[i] == 'S')
            yst = g - yst - 1;
        if (arr[i] == 'G')
            yst = p - yst - 1;
        if (arr[i] == 'P')
            yst = d - yst - 1;
        if (arr[i] == 'D')
            yst = d;

        sum += yst;
    }

    printf("%d", sum);

    return 0;
}