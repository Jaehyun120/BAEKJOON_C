//BAEKJOON_10871

#include<stdio.h>

int main()
{
    int n=0;
    int x=0;
    scanf("%d %d",&n,&x);
    
    int arr[10000]={0};
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]<x)
        {
            printf("%d ",arr[j]);
        }
    }
    
    return 0;
}