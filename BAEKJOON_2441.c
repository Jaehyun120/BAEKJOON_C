//BAEKJOON_2441

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    for(int i=n;0<i;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}