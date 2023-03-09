//BAEKJOON_1110

#include<stdio.h>

int main()
{
   int n=0;
   scanf("%d", &n);
   int c=n;

   int cnt=0;
   do{
      int t=c%10;
      int o=(c/10+c%10)%10;
      c=t*10+o;
      cnt++;
   }while(n!=c);

   printf("%d", cnt);

   return 0;
}