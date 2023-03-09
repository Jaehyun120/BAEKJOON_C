//BAEKJOON_4673

#include<stdio.h>

int k(int n, int* a)
{
    int mot = n;
    while (n != 0)
    {
        mot += (n % 10);
        n /= 10;
    }
    *a += 1;
    return mot;
}

int arr[10000] = { 0 };

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        int count = 0;
        int b = i;
        while (1)
        {
            b = k(b, &count);
            if (b > 10000) break;
            arr[b-1] = arr[b-1] + 1;
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i-1] == 0)
            printf("%d\n", i);
    }

    return 0;
}