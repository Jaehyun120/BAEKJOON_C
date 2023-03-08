//BAEKJOON_7568

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    int arr[50][2];
    for(int i=0;i<n;i++)
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    
    int narr[50];
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(arr[j][0]>arr[i][0]&&arr[j][1]>arr[i][1])
                cnt++;
        }
        narr[i]=cnt+1;
    }
    
    for(int i=0;i<n;i++)
        printf("%d ",narr[i]);
    
    return 0;
}