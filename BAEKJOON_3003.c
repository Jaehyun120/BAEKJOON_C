//BAEKJOON_3003

#include<stdio.h>

int main()
{
    int arr[6];
    int right[6]={1,1,2,2,2,8};
    
    for(int i=0;i<6;i++)
        scanf("%d",&arr[i]);
        
    for(int i=0;i<6;i++)
        printf("%d ",right[i]-arr[i]);
    
    return 0;
}