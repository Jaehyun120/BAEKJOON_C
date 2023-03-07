//BAEKJOON_17224

#include<stdio.h>

int main()
{
    int n = 0;
    int l = 0;
    int k = 0;
    int arr[100][2];
    int s1n = 0;
    int s2n = 0;


    scanf(" %d %d %d", &n, &l, &k);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] <= l && arr[i][1] <= l)
            s2n++;
        if (arr[i][0] <= l && l < arr[i][1])
            s1n++;
    }

    if (k <= s2n) printf("%d", k * 140);
    else if ((s1n + s2n) <= k) printf("%d", s1n * 100 + s2n * 140);
    else if (s2n <= k && k <= (s1n + s2n)) printf("%d", s2n * 140 + (k - s2n) * 100);

    return 0;
}