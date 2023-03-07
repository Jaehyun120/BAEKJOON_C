//BAEKJOON_10430

#include<stdio.h>

int main()
{
    int A=0;
    int B=0;
    int C=0;
    
    scanf("%d %d %d",&A,&B, &C);
    
    printf("%d\n%d\n%d\n%d",(A+B)%C,((A%C)+(B%C))%C,(A*B)%C,((A%C)*(B%C))%C);
    
    return 0;
}