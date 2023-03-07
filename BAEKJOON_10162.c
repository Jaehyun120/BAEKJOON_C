//BAEKJOON_10162

#include<stdio.h>

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    if(n%10!=0)
    {
        printf("-1");
        return 0;
    }
    
    int a=0;
    int b=0;
    int c=0;
    
    if(n>=300)
    {
        int k=n/300;
        a=k;
        n%=300;
    }
    
    if(n>=60)
    {
        int k=n/60;
        b=k;
        n%=60;
    }
    
    if(n>=10)
    {
        int k=n/10;
        c=k;
    }
    
    printf("%d %d %d",a,b,c);
    
    return 0;
}