#include<stdio.h>
int main()
{
int i,sum=0,mean,arr[50],n;
printf("Enter n(within size 50) to find their mean and sum:\n");
scanf("%d",&n);

printf("Enter %d numbers to find their sum and mean",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
 
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}

mean=sum/10;

printf("The sum of entered 10 numbers is: %d\n",sum);
printf("The mean of entered 10 numbers is: %d\n",mean);
return 0;
}
