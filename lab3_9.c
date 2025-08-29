//wap to print sum of n even natural nos.
#include<stdio.h>
int main()
{
int sum=0,i,n;
printf("Enter any even no. n :\n");
scanf("%d" ,&n);
for(i=2;i<=n;i+=2)
   {
   sum = sum + i;
   }
   printf("the sum of n even natural nos. is %d \n" ,sum);

return 0;
}
