//BAEKJOON_10103

#include<stdio.h>

int main()
{
    int n=0;
    scanf(" %d",&n);
    int c=100;
    int s=100;
    
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        scanf(" %d %d",&a,&b);
        
        if(a==b)
            continue;
        if(a>b)
            s-=a;
        if(a<b)
            c-=b;
    }
    printf("%d\n%d",c,s);
    
    return 0;
}