//BAEKJOON_1934

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
        scanf(" %d %d",&a,&b);
        int m=a*b;
        
        while(a%b!=0)
        {
            int cmt=b;
            b=a%b;
            a=cmt;
        }
        
        arr[i]=m/b;
    }
    
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    
    return 0;
}