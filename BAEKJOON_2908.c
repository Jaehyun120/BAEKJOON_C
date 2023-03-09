//BAEKJOON_2908

#include<stdio.h>
#include<string.h>

int tst(int n)
{
    if (n == 0) return 1;
    return 10 * tst(n - 1);
}

int main()
{
    char arr1[4] = { 0 };
    char arr2[4] = { 0 };
    char smt[4] = { 0 };
    int cst1 = 0;
    int cst2 = 0;
    scanf("%s", &arr1[0]);
    scanf("%s", &arr2[0]);

    strcpy(smt, arr1);
    for (int i = 0; i < 3; i++)
    {
        arr1[i] = smt[2 - i];
        cst1 += tst(2 - i) * ((int)arr1[i]-48);
    }
    strcpy(smt, arr2);
    for (int i = 0; i < 3; i++)
    {
        arr2[i] = smt[2 - i];
        cst2 += tst(2 - i) * ((int)arr2[i]-48);
    }
    if (cst1 > cst2)
        printf("%d", cst1);
    else printf("%d", cst2);

    return 0;
}