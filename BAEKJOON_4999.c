//BAEKJOON_4999

#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    char b[1000];

    scanf("%s", &a);
    scanf("%s", &b);

    if (strlen(a) >= strlen(b)) printf("go");
    else printf("no");

    return 0;
}