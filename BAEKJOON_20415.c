//BAEKJOON_20415

#include<stdio.h>

int max(int* arr, int n);

int s = 0;
int g = 0;
int p = 0;
int d = 0;

int main()
{
    int n = 0;
    scanf(" %d", &n);
    scanf(" %d %d %d %d", &s, &g, &p, &d);

    char arr[37] = { 0 };
    scanf(" %s", &arr);

    int narr[37] = { 0 };
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'B')
            narr[i] = 1;
        if (arr[i] == 'S')
            narr[i] = 2;
        if (arr[i] == 'G')
            narr[i] = 3;
        if (arr[i] == 'P')
            narr[i] = 4;
        if (arr[i] == 'D')
            narr[i] = 5;
    }

    int sum = 0;
    int yst = 0;
    for (int i = 0; i < n; i++)
    {
        if (narr[i] == 1)
        {
            yst = s - yst - 1;
        }
        if (narr[i] == 2)
        {
            if ((narr[i] <= narr[i + 1]) || (narr[i + 1] == 0))
                yst = g - yst - 1;
            else if (narr[i] > narr[i + 1])
            {
                int val1 = g - yst - 1;
                int val2 = max(narr, i);
                yst = val1 <= val2 ? val1 : val2;
            }
        }
        if (narr[i] == 3)
        {
            if ((narr[i] <= narr[i + 1]) || (narr[i + 1] == 0))
                yst = p - yst - 1;
            else if (narr[i] > narr[i + 1])
            {
                int val1 = p - yst - 1;
                int val2 = max(narr, i);
                yst = val1 <= val2 ? val1 : val2;
            }
        }
        if (narr[i] == 4)
        {
            if ((narr[i] <= narr[i + 1]) || (narr[i + 1] == 0))
                yst = d - yst - 1;
            else if (narr[i] > narr[i + 1])
            {
                int val1 = d - yst - 1;
                int val2 = max(narr, i);
                yst = val1 <= val2 ? val1 : val2;
            }
        }
        if (narr[i] == 5)
        {
            if ((narr[i] == narr[i + 1]) || (narr[i + 1] == 0))
                yst = d;
            else if (narr[i] > narr[i + 1])
            {
                int val1 = d;
                int val2 = max(narr, i);
                yst = val1 <= val2 ? val1 : val2;
            }
        }

        sum += yst;
    }

    printf("%d", sum);

    return 0;
}

int max(int* ar, int n)
{
    if (ar[n + 1] == 1)
        return s - 1;
    if (ar[n + 1] == 2)
        return g - 1;
    if (ar[n + 1] == 3)
        return p - 1;
    if (ar[n + 1] == 4)
        return d - 1;
}