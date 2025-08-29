//wap to print sum of n odd natural nos.
#include<stdio.h>
int main()
{
int sum=0,i,n;
printf("Enter any odd no. n :\n");
scanf("%d" ,&n);
for(i=1;i<=n;i+=2)
   {
   sum = sum + i;
   }
   printf("the sum of n odd natural nos. is %d \n" ,sum);

return 0;
}
