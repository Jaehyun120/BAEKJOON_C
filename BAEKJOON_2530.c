//BAEKJOON_2530

#include<stdio.h>

int main()
{
    int h=0;
    int m=0;
    int s=0;
    int t=0;
    int p1=0;
    int p2=0;
    
    scanf("%d %d %d",&h,&m,&s);
    scanf("%d",&t);
    s+=t;
    
    p1=s/60;
    s%=60;
    m+=p1;
    
    p2=m/60;
    m%=60;
    h+=p2;
    
    while(h>=24)
        h-=24;

    printf("%d %d %d",h,m,s);

    return 0;
}