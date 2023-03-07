//BAEKJOON_20540

#include<stdio.h>

int main()
{
    char arr[4] = { 0 };
    scanf(" %s", &arr);

    if (arr[0] == 'E')
        printf("I");
    else if (arr[0] == 'I')
        printf("E");

    if (arr[1] == 'S')
        printf("N");
    else if (arr[1] == 'N')
        printf("S");

    if (arr[2] == 'T')
        printf("F");
    else if (arr[2] == 'F')
        printf("T");

    if (arr[3] == 'J')
        printf("P");
    else if (arr[3] == 'P')
        printf("J");

    return 0;
}