#include<stdio.h>
int main()
{
    int arr[10],i;

for(i=0;i<10;i++)
   {
    scanf("%d",&arr[i]);
   }

   printf("the value at 4th,7th and 9th is %d,%d and %d respectively.",arr[3],arr[6],arr[8]);
   return 0;
}