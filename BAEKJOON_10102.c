//BAEKJOON_10102

#include<stdio.h>

char arr[16];

int main()
{
    int n=0;
    scanf(" %d",&n);
    scanf(" %s",&arr);
    
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='A')
            a++;
        else if(arr[i]=='B')
            b++;
    }
    
    if(a>b)
        printf("A");
    else if(a==b)
        printf("Tie");
    else if(a<b)
        printf("B");
    
    return 0;
}