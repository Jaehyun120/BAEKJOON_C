//BAEKJOON_1316

#include<stdio.h>

int main()
{
   char arr[101]={0};
   int cnt=0;
   int n=0;
   scanf("%d", &n);
   
   for(int i=0;i<n;i++)
   {
      scanf("%s", &arr[0]);

      int ap[26]={0};
      ap[(int)arr[0]-97]++;
      for(int j=1;;j++)
      {
         if(arr[j]=='\0')
         {
            cnt++;
            break;
         }

         if(ap[(int)arr[j]-97]!=0&&arr[j-1]!=arr[j])
            break;

         ap[(int)arr[j]-97]++;
      }
   }
   
   printf("%d", cnt);

   return 0;
}