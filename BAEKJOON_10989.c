//BAEKJOON_10989

#include<stdio.h>

int arr[10000];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++)
    {
        int k=0;
        scanf(" %d",&k);
        arr[k-1]++;
    }
    
    for(int i=0;i<10000;i++)
        for(int j=0;j<arr[i];j++)
            printf("%d\n",i+1);

    
    return 0;
}