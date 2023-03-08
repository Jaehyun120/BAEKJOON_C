//BAEKJOON_5063

#include<stdio.h>

int arr[1000];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++)
    {
        int a=0;
        int b=0;
        int c=0;
        scanf(" %d %d %d",&a,&b,&c);
        
        arr[i]=a-b+c;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            printf("advertise\n");
        else if(arr[i]==0)
            printf("does not matter\n");
        else if(arr[i]>0)
            printf("do not advertise\n");
    }
    
    return 0;
}