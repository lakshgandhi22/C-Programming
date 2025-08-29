//wap to print sum of n natural nos.
#include<stdio.h>
int main()
{
int sum=0,i,n;
printf("Enter n :\n");
scanf("%d" ,&n);
for(i=1;i<=n;i++)
   {
   sum = sum + i;
   }
   printf("the sum of n natural nos. is %d \n" ,sum);

return 0;
}
