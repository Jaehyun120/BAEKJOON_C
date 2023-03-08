//BAEKJOON_5717

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
        
        if((a==0)&&(b==0))
            break;
        
        arr[n]=a+b;
        n++;
    }
    
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    
    return 0;
}