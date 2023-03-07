//BAEKJOON_10807

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d", &n);
    
    int arr[101]={0};
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    int k=0;
    scanf("%d", &k);
    
    int sum=0;
    for(int i=0;i<n;i++)
        if(k==arr[i]) sum++;
    
    printf("%d", sum);
    
    return 0;    
}