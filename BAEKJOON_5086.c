//BAEKJOON_5086

#include<stdio.h>

int main()
{
    int arr[1000][2];
    int i=0;
    
    do{
        scanf("%d %d",&arr[i][0],&arr[i][1]);
        i++;
    }while(arr[i-1][0]!=0&&arr[i-1][1]!=0);
    i--;
    
    for(int k=0;k<i;k++)
    {
        if(arr[k][1]%arr[k][0]==0)
            printf("factor\n");
        else if(arr[k][0]%arr[k][1]==0)
            printf("multiple\n");
        else printf("neither\n");
    }
    
    return 0;
}