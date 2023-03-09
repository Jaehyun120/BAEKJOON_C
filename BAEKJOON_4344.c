//BAEKJOON_4344

#include<stdio.h>

int num[100];
int arr[1000][1000];
double avg[100];
int kdr[100];

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        for (int j = 0; j < num[i]; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < num[i]; j++)
        {
            sum += arr[i][j];
        }

        avg[i] = (double)sum / (double)num[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < num[i]; j++)
        {
            if (arr[i][j] > avg[i])
                count++;
        }

        kdr[i] = count;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%.3f%%\n", (double)kdr[i] / (double)num[i] * 100.0);
    }

    return 0;
}