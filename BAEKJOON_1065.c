//BAEKJOON_1065

#include<stdio.h>

int main()
{
   int n=0;
   scanf("%d", &n);

   if(n<100)
      printf("%d", n);
   else
   {
      int cnt=0;

      for(int i=100;i<=n;i++)
      {
         int a=i/100;
         int b=(i%100)/10;
         int c=(i%100)%10;

         if(b-a==c-b)
            cnt++;
      }

      printf("%d", cnt+99);
   }

   return 0;
}