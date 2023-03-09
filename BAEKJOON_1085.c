//BAEKJOON_1085

#include<stdio.h>

int main()
{
   int x=0;
   int y=0;
   int w=0;
   int h=0;
   scanf("%d %d %d %d", &x, &y, &w, &h);

   w=x>=w-x?w-x:x;
   h=y>=h-y?h-y:y;
   printf("%d", w>=h?h:w);

   return 0;
}