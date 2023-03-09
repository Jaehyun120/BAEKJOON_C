//BAEKJOON_2941

#include<stdio.h>

int main()
{
    char arr[105]={0};
    scanf(" %s",&arr[0]);
    int count=0;
    
    int i=0;
re:
    while(arr[i]!='\0')
    {
        if(arr[i]=='c'&&(arr[i+1]=='='||arr[i+1]=='-'))
        {
            count++;
            i+=2;
            goto re;
        }
        if(arr[i]=='d'&&arr[i+1]=='z'&&arr[i+2]=='=')
        {
            count++;
            i+=3;
            goto re;
        }
        if(arr[i]=='d'&&arr[i+1]=='-')
        {
            count++;
            i+=2;
            goto re;
        }
        if((arr[i]=='l'||arr[i]=='n')&&arr[i+1]=='j')
        {
            count++;
            i+=2;
            goto re;
        }
        if((arr[i]=='s'||arr[i]=='z')&&arr[i+1]=='=')
        {
            count++;
            i+=2;
            goto re;
        }
        count++;
        i++;
    }
    
    printf("%d",count);
    
    return 0;
}