//BAEKJOON_2609

#include<stdio.h>

int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int k=a*b;
    
    int cmt=0;
    if(a<b)
    {
        cmt=a;
        a=b;
        b=cmt;
    }
    
    while(a%b!=0)
    {
        cmt=b;
        b=a%b;
        a=cmt;
    }
    
    printf("%d\n%d",b,k/b);
    
    return 0;
}