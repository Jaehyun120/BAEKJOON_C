//BAEKJOON_10828

#include<stdio.h>
#include<string.h>

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    int stk[10000];
    int k=0;
    for(int i=0;i<n;i++)
    {
        char cmd[6]={0};
        scanf(" %s",&cmd);
        
        if(strcmp(cmd,"push")==0)
        {
            scanf(" %d",&stk[k]);
            k++;            
        }
        else if(strcmp(cmd,"pop")==0)
        {
            if(k==0)
                printf("-1\n");
            else if(k>0)
            {
                k--;
                printf("%d\n",stk[k]);
            }
        }
        else if(strcmp(cmd,"size")==0)
            printf("%d\n",k);
        else if(strcmp(cmd,"empty")==0)
        {
            if(k==0)
                printf("1\n");
            else if(k>0)
                printf("0\n");
        }
        else if(strcmp(cmd,"top")==0)
        {
            if(k==0)
                printf("-1\n");
            else if(k>0)
                printf("%d\n",stk[k-1]);
        }
    }
    
    return 0;
}