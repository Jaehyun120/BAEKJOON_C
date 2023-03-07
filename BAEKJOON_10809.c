//BAEKJOON_10809

#include<stdio.h>

int main()
{
    char arr[100]={0};
    scanf("%s",&arr[0]);
    int abc[26]={0};
    
    int i=0;
    int cnt=1;
    while(arr[i]!=0)
    {
        int m=(int)arr[i]-97;
        if(abc[m]==0)
            abc[m]=i+1;

        i++;
    }
    
    for(int j=0;j<26;j++)
    {
        if(abc[j]==0)
            printf("-1 ");
        else printf("%d ",abc[j]-1);
    }
}