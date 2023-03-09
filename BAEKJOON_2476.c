//BAEKJOON_2476

#include<stdio.h>

int arr[1000][3];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++)
        scanf(" %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    
    int m=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i][0]==arr[i][1])&&(arr[i][0]==arr[i][2]))
            c=10000+arr[i][0]*1000;
        else if((arr[i][0]==arr[i][1])&&(arr[i][0]!=arr[i][2]))
            c=1000+arr[i][0]*100;
        else if((arr[i][0]==arr[i][2])&&(arr[i][0]!=arr[i][1]))
            c=1000+arr[i][0]*100;
        else if((arr[i][1]==arr[i][2])&&(arr[i][0]!=arr[i][1]))
            c=1000+arr[i][1]*100;
        else if(((arr[i][0]!=arr[i][1])&&(arr[i][0]!=arr[i][2]))&&(arr[i][1]!=arr[i][2]))
        {
            int k=(arr[i][0]<=arr[i][1]?arr[i][1]:arr[i][0])<=arr[i][2]?arr[i][2]:(arr[i][0]<=arr[i][1]?arr[i][1]:arr[i][0]);
            c=k*100;
        }
        
        m=m<=c?c:m;
    }
    
    printf("%d",m);
    
    return 0;
}