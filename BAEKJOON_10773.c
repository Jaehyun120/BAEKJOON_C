//BAEKJOON_10773

#include<stdio.h>

int arr[100000];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
        if(arr[i]==0)
        {
            i-=2;
            n-=2;
        }
    }
    
    long long sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    
    printf("%u",sum);
    
    return 0;
}