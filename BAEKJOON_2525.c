//BAEKJOON_2525

#include<stdio.h>

int main()
{
    int h=0;
    int m=0;
    int t=0;
    int p=0;
    
    scanf("%d %d",&h,&m);
    scanf("%d",&t);
    m+=t;
    
    p=m/60;
    m%=60;
    h+=p;
    while(h>=24)
        h-=24;

    printf("%d %d",h,m);

    return 0;
}