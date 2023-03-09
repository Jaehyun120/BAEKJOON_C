//BAEKJOON_2562

#include<stdio.h>

int main()
{
    int arr[9]={0};
    for(int i=0;i<9;i++)
    {
        scanf(" %d",&arr[i]);
    }
    int max=0;
    for(int i=1;i<9;i++)
    {
        if(arr[max]<arr[i])
            max=i;
    }
    printf("%d\n%d",arr[max],max+1);
    
    return 0;
}