//BAEKJOON_2778

#include<stdio.h>

int narr[10000][2];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    long long arr[15][14]={0};
    for(int i=0;i<14;i++)
        arr[0][i]=i+1;
    
    int p=0;
    int q=0;
    while(q!=EOF)
    {
        q=scanf(" %d %d",&narr[p][0],&narr[p][1]);
        p++;
    }
    p--;
    
    for(int i=1;i<15;i++)
    {
        for(int j=0;j<14;j++)
        {
           for(int k=0;k<=j;k++)
               arr[i][j]+=arr[i-1][k];
        }
    }
    
    for(int i=0;i<p;i++)
        printf("%u\n",arr[narr[i][0]][narr[i][1]-1]);
    
    return 0;
}