//BAEKJOON_5622

#include<stdio.h>

int main()
{
    int iarr[15] = { 0 };
    char carr[16] = { 0 };
    scanf(" %s", &carr[0]);

    int i = 0;
    while (carr[i] != '\0')
    {
        iarr[i] = (int)carr[i];
        i++;
    }

    for (int k = 0; k < i; k++)
    {
        if (65 <= iarr[k] && iarr[k] <= 67)
            iarr[k] = 2;
        if (68 <= iarr[k] && iarr[k] <= 70)
            iarr[k] = 3;
        if (71 <= iarr[k] && iarr[k] <= 73)
            iarr[k] = 4;
        if (74 <= iarr[k] && iarr[k] <= 76)
            iarr[k] = 5;
        if (77 <= iarr[k] && iarr[k] <= 79)
            iarr[k] = 6;
        if (80 <= iarr[k] && iarr[k] <= 83)
            iarr[k] = 7;
        if (84 <= iarr[k] && iarr[k] <= 86)
            iarr[k] = 8;
        if (87 <= iarr[k] && iarr[k] <= 90)
            iarr[k] = 9;
    }

    int time = 0;
    for (int k = 0; k < i; k++)
        time += iarr[k] + 1;

    printf("%d", time);

    return 0;
}