//BAEKJOON_9012

#include<stdio.h>

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    char arr[10000][51]={0};
    for(int i=0;i<n;i++)
        scanf(" %s",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        int wrg=0;
        int brk=0;
        int j=0;
        while(arr[i][j]!='\0')
        {
            if(brk==0&&arr[i][j]==')')
            {
                wrg++;
                printf("NO\n");
                break;
            }
            if(arr[i][j]=='(')
                brk++;
            if(arr[i][j]==')')
                brk--;
            
            j++;
        }
        
        if(wrg==1)
            continue;
        
        if(brk==0)
            printf("YES\n");
        else if(brk!=0)
            printf("NO\n");
    }
    
    return 0;
}