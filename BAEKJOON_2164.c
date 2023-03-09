//BAEKJOON_2164

#include<stdio.h>

int arr[1000000];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    int s=0;
    int f=n-1;
    int m=n;
    for(int i=0;i<n;i++)
        arr[i]=i+1;
    
    int op=1;
    while(m!=1)
    {
        if(op==1)
        {
            s++;
            m--;
            op*=(-1);
        }
        else if(op==-1)
        {
            arr[f+1]=arr[s];
            s++;
            f++;
            op*=(-1);
        }
    }
    
    printf("%d",arr[s]);
    
    return 0;
}