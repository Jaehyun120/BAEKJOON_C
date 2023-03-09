//BAEKJOON_2675

#include<stdio.h>

int main()
{
    int n = 0;
    int arr[1000] = { 0 };
    char qr[1000][21] = { 0 };
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
        scanf(" %s", &qr[i][0]);
    }
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        while (qr[i][k] != '\0')
        {
            for (int j = 0; j < arr[i]; j++)
                printf("%c", qr[i][k]);
            k++;
        }
        printf("\n");
    }

    return 0;
}