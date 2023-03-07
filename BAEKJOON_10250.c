//BAEKJOON_10250

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr[1000][3] = { 0 };
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);

    for (int i = 0; i < n; i++)
    {
        arr[i][1] = arr[i][2] % arr[i][0];
        arr[i][2] /= arr[i][0];

        if (arr[i][1] == 0)
        {
            arr[i][1] = arr[i][0];
            arr[i][2]--;
        }

        if (arr[i][2] >= 9)
            printf("%d%d\n", arr[i][1], arr[i][2] + 1);
        if (arr[i][2] < 9)
            printf("%d0%d\n", arr[i][1], arr[i][2] + 1);
    }

    return 0;
}