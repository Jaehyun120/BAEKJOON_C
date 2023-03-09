//BAEKJOON_3052

#include<stdio.h>

int main()
{
    int sum=0;
    int arr[10]={0};
    int num[42]={0};
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]%=42;
    }
    for(int i=0;i<10;i++)
    {
        num[arr[i]]+=1;
    }
    
    int count=0;
    for(int i=0;i<42;i++)
    {
        if(num[i]!=0) count++;
    }
    
    printf("%d",count);
    return 0;
}