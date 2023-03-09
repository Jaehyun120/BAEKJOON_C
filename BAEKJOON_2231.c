//BAEKJOON_2231

#include<stdio.h>
int ggs(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    
    return sum;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    if(n<=55)
    {
        for(int i=0;i<n;i++)
        {
            if(n==(i+ggs(i)))
            {
                printf("%d",i);
                
                return 0;
            }
        }
    }
    else if(n>55)
    {
        for(int i=n-55;i<n;i++)
        {
            if(n==(i+ggs(i)))
            {
                printf("%d",i);
                
                return 0;
            }
        }
    }
    
    printf("0");
    
    return 0;
}