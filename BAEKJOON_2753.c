//BAEKJOON_2753

#include<stdio.h>

int main()
{
    int a=0;
    while(a<1||a>4000)
    {
        scanf("%d",&a);
    }
    
    if((a%4==0&&a%100!=0)||a%400==0)
        printf("1");
    else printf("0");
    
    return 0;
}