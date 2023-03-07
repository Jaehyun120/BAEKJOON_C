//BAEKJOON_25304

#include<stdio.h>

int main()
{
    int x = 0;
    scanf("%d", &x);

    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);

        sum += a * b;
    }

    if (x == sum) printf("Yes\n");
    else printf("No\n");

    return 0;
}