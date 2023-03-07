//BAEKJOON_10953

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    int a=0;
    int b=0;
    char c=',';
    
    for(int i=0;i<n;i++)
    {
        scanf("%d%c%d",&a,&c,&b);
        printf("%d\n",a+b);
    }
    
    return 0;
}