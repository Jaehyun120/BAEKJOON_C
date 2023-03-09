//BAEKJOON_1978

#include<stdio.h>

int arr[100];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++)
        scanf(" %d",&arr[i]);
    
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            continue;
        
        int wrg=0;
        for(int j=2;j<arr[i];j++)
            if(arr[i]%j==0)
            {
                wrg++;
                break;
            }
        
        if(wrg==1)
            continue;
        
        cnt++;
    }
    
    printf("%d",cnt);
    
    return 0;
}