//BAEKJOON_10818

#include<stdio.h>

int main()
{
    int arr[1000000]={0};
    int count=0;
    
    int n=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    int min=arr[0];
    
    for(int i=1;i<n;i++)
    {
        max=max>=arr[i]?max:arr[i];
        min=min<=arr[i]?min:arr[i];
    }
    
    printf("%d %d",min,max);
    
    return 0;
}