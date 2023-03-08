//BAEKJOON_7567

#include<stdio.h>
#include<string.h>

char arr[1000];

int main()
{
    scanf(" %s",&arr);
    int l=strlen(arr);
    
    int cnt=10;
    
    for(int i=1;i<l;i++)
    {
        if(arr[i-1]==arr[i])
            cnt+=5;
        else if(arr[i-1]!=arr[i])
            cnt+=10;
    }
    
    printf("%d",cnt);
    
    return 0;
}