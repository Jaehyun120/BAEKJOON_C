//BAEKJOON_1929

#include<stdio.h>
#include<math.h>

int main()
{
   int m=0;
   int n=0;
   scanf("%d %d", &m, &n);

   if(m<3)
   {
      printf("2\n");
      m=3;
   }

   for(int i=m;i<=n;i++)
   {
      if(i%2==0)
         continue;

      int cnt=0;
      for(int j=3;;)
      {
         if(j>sqrt(i))
            break;
         else if(i%j==0)
         {
            cnt++;
            break;
         }

         j+=2;
      }

      if(cnt==0)
         printf("%d\n", i);
   }

   return 0;
}