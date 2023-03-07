//BAEKJOON_10845

#include<stdio.h>
#include<string.h>

char arr[10000][6];
int narr[10000];
int stk[10000];

int main()
{
    int n=0;
    scanf(" %d",&n);
   
    for(int i=0;i<n;i++)
    {
        scanf(" %s",&arr[i]);
        if(strcmp(arr[i],"push")==0)
            scanf(" %d",&narr[i]);
    }
   
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(arr[i],"push")==0)
        {
            stk[k]=narr[i];
            k++;
        }
        else if(strcmp(arr[i],"pop")==0)
        {
            if(k==0)
            {
                printf("-1\n");
                continue;
            }
            
            printf("%d\n",stk[0]);
            
            for(int j=1;j<k;j++)
                stk[j-1]=stk[j];
            k--;
        }
        else if(strcmp(arr[i],"size")==0)
        {
           printf("%d\n",k);
        }
        else if(strcmp(arr[i],"empty")==0)
        {
           if(k==0)
               printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(arr[i],"front")==0)
        {
            if(k==0)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n",stk[0]);
        }
        else if(strcmp(arr[i],"back")==0)
        {
            if(k==0)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n",stk[k-1]);
        }
    }
    
    return 0;
}