//BAEKJOON_1712

#include<stdio.h>
#include<math.h>

int main()
{
   int a=0;
   int b=0;
   int c=0;
   scanf("%d %d %d", &a, &b, &c);

   if(b>=c)
      printf("-1");
   else
      printf("%d", (int)floor(a/(c-b))+1);

   return 0;
}