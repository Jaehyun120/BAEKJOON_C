//BAEKJOON_4101

#include<stdio.h>

int arr[1000];

int main()
{
    int n=0;
    while(1)
    {
        int a=0;
        int b=0;
        scanf(" %d %d",&a,&b);
        
        if(a==0&&b==0)
            break;
        else if(a>b)
            arr[n]=1;
        else if(a<=b)
            arr[n]=2;
        
        n++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            printf("Yes\n");
        else if(arr[i]==2)
            printf("No\n");
    }
    
    return 0;
}