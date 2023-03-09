//BAEKJOON_2798

#include<stdio.h>

int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    
    int arr[100];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int asw=0;
    int sum=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                sum=arr[i]+arr[j]+arr[k];
                
                if(sum>m)
                    continue;
                    
                asw=asw<=sum?sum:asw;
            }
        }
    }
    
    printf("%d",asw);
    
    return 0;
}