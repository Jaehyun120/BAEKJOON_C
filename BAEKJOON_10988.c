//BAEKJOON_10988

#include<stdio.h>

int main()
{
    char arr[101]={0};
    int i=0;
    int k=0;
    
    do{
        k = scanf("%c", &arr[i]);
        i++;
    } while (arr[i - 1] != '\n');
    i -= 2;
    
    int count=0;
    for(int k=0;k<=i;k++)
    {
        if(arr[k]!=arr[i-k])
            count++;
    }
    
    if(count==0)
        printf("1");
    else printf("0");
    
    return 0;
}