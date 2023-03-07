//BAEKJOON_10814

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    int age[100000];
    char name[100000][101];
    for(int i=0;i<n;i++)
        scanf(" %d %s",&age[i],&name[i]);
    
    for(int i=1;i<=200;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(age[j]==i)
                printf("%d %s\n",age[j],name[j]);
        }
    }
    
    return 0;
}