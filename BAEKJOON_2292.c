//BAEKJOON_2292

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    n--;
    int i=1;
    while(n>0)
    {
        n-=(6*i);
        i++;
    }
    
    printf("%d",i);
    
    return 0;
}