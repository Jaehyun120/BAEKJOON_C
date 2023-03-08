//BAEKJOON_8958

#include<stdio.h>

int main()
{
    int n = 0;
    char arr[100][81] = { 0 };
    int score[100] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i][0]);
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int add = 0;
        int j = 0;

        while (arr[i][j] != '\0')
        {
            if (arr[i][j] == 'O')
            {
                sum = sum + 1 + add;
                add++;
            }
            if (arr[i][j] == 'X')
            {
                add = 0;
            }

            j++;
        }

        score[i] = sum;
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", score[i]);

    return 0;
}