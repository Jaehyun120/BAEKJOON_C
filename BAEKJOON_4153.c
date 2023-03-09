//BAEKJOON_4153

#include<stdio.h>

int main()
{
    int arr[1000][3];
    int i=0;
    while(1)
    {
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
        
        if(arr[i][0]==0&&arr[i][1]==0&&arr[i][2]==0)
            break;
        
        i++;
    }

    for(int j=0;j<i;j++)
    {
        int mn=0;
        if(arr[j][0]>arr[j][1])
            mn=0;
        else mn=1;
        
        if(arr[j][mn]>arr[j][2])
        {
            int cmt=arr[j][mn];
            arr[j][mn]=arr[j][2];
            arr[j][2]=cmt;
        }
        
        if((arr[j][0]*arr[j][0]+arr[j][1]*arr[j][1])==(arr[j][2]*arr[j][2]))
            printf("right\n");
        else printf("wrong\n");
    }
    
    return 0;
}