//BAEKJOON_2588

#include<stdio.h>

int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    
    int c=b/100;
    b=b%100;
    int d=b/10;
    b=b%10;
    int e=b;
    
    printf("%d\n%d\n%d\n%d",a*e,a*d,a*c,a*e+10*a*d+100*a*c);
    
    return 0;
}