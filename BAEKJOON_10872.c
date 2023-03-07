//BEAKJOON_10872

#include<stdio.h>

int fct(int n);

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    n=fct(n);
    printf("%d",n);
    
    return 0;
}

int fct(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;
    return n*fct(n-1);
}