//BAEKJOON_2920

#include<stdio.h>

int main()
{
    int arr[8]={0};
    for(int i=0;i<8;i++)
        scanf("%d",&arr[i]);
              
    int c1=0;
    int c2=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==(i+1))
            c1++;
        if(arr[i]==(8-i))
            c2++;
    }
    
    if(c1==8)
        printf("ascending");
    else if(c2==8)
        printf("descending");
    else printf("mixed");
    
    return 0;
}