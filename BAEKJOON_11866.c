//BAEKJOON_11866

#include<stdio.h>

int arr[10000000];
int narr[1000];

int main()
{
    int n = 0;
    int m = 0;
    scanf(" %d %d", &n, &m);
    m--;

    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    int s = 0;
    int f = n - 1;
    int op = 0;
    int k = 0;
    int cn = n;
    while (cn != 0)
    {
        if (op != m)
        {
            f++;
            arr[f] = arr[s];
            s++;
            op++;
        }
        else if (op == m)
        {
            narr[k] = arr[s];
            k++;
            s++;
            op = 0;
            cn--;
        }
    }

    printf("<");
    for (int i = 0; i < n - 1; i++)
        printf("%d, ", narr[i]);
    printf("%d>", narr[n - 1]);

    return 0;
}