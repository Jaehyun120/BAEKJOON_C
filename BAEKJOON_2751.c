//BAEKJOON_2751

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    int k=0;
    int arr[2000001]={0};
    int mnv=1000000;
    int mxv=-1000000;
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&k);
        arr[k+1000000]++;
        mxv=mxv<k?k:mxv;
        mnv=k<mnv?k:mnv;
    }
    
    for(int i=mnv;i<=mxv;i++)
    {
        if(arr[i+1000000]==1)
            printf("%d\n",i);
    }
    
    return 0;
    
}