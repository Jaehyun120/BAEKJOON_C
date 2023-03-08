//BAEKJOON_4949

#include<stdio.h>

int main()
{
    char arr[10000][101];
    int k=0;
    do{
        int l=0;
        do{
            scanf("%c",&arr[k][l]);
            l++;
        }while(arr[k][l-1]!='\n');
        
        fflush(stdin);
        k++;
    }while(arr[k-1][0]!='.');
    k--;
    
    for(int i=0;i<k;i++)
    {
        int brk1=0;
        int brk2=0;
        int wrg=0;
        int now[100]={0};
        for(int j=0;;j++)
        {
            if(arr[i][j]=='.')
                break;
            
            if(brk1==0&&arr[i][j]==')')
            {
                wrg++;
                break;
            }
            else if(brk2==0&&arr[i][j]==']')
            {
                wrg++;
                break;
            }
            
            int rnow=0;
            if(arr[i][j]=='(')
            {
                brk1++;
                now[j]=1;
            }
            else if(arr[i][j]==')')
            {
                int dt=j;
                while(1)
                {
                    dt--;
                    if(now[dt]!=0)
                    {
                        rnow=now[dt];
                        now[dt]=0;
                        break;
                    }
                }
                if(rnow==2)
                {
                    wrg++;
                    break;
                }
                brk1--;
            }
            else if(arr[i][j]=='[')
            {
                brk2++;
                now[j]=2;
            }
            else if(arr[i][j]==']')
            {
                int dt=j;
                while(1)
                {
                    dt--;
                    if(now[dt]!=0)
                    {
                        rnow=now[dt];
                        now[dt]=0;
                        break;
                    }
                }
                if(rnow==1)
                {
                    wrg++;
                    break;
                }
                brk2--;
            }
        }
        
        if(wrg==1)
        {
            printf("no\n");
            continue;
        }
        else if(brk1==0&&brk2==0)
            printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}