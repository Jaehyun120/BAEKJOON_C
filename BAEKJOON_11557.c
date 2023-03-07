//BAEKJOON_11557

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr1[1000] = { 0 };
    char arr2[1000][21] = { 0 };
    int arr3[1000] = { 0 };

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr1[i]);
        for (int j = sum; j < sum + arr1[i]; j++)
            scanf(" %s %d", &arr2[j][0], &arr3[j]);
        sum += arr1[i];
    }

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        int mxnm = sum;
        for (int j = sum + 1; j < sum + arr1[i]; j++)
        {
            if (arr3[mxnm] <= arr3[j])
                mxnm = j;
        }
        printf("%s\n", arr2[mxnm]);

        sum += arr1[i];
    }

    return 0;
}