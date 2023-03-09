//BAEKJOON_2475

#include<stdio.h>

int main()
{
    int arr[5]={0};
    int ms=0;
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        ms+=(arr[i]*arr[i]);
    }
    
    printf("%d",ms%10);
    
    return 0;
}