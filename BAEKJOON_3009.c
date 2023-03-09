//BAEKJOON_3009

#include<stdio.h>

int arr[6];

int main()
{
    scanf(" %d %d",&arr[0],&arr[1]);
    scanf(" %d %d",&arr[2],&arr[3]);
    scanf(" %d %d",&arr[4],&arr[5]);
    
    int n=0;
    int m=0;
    
    if(arr[0]==arr[2])
        n=arr[4];
    else if(arr[0]==arr[4])
        n=arr[2];
    else n=arr[0];
    
    if(arr[1]==arr[3])
        m=arr[5];
    else if(arr[1]==arr[5])
        m=arr[3];
    else m=arr[1];
    
    printf("%d %d",n,m);
    
    return 0;
}