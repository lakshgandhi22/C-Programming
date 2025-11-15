#include<stdio.h>
int main()
{
int i,sum=0,mean,arr[10];
printf("Enter 10 numbers to find their sum and mean:\n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
 
for(i=0;i<10;i++)
{
    sum=sum+arr[i];
}

mean=sum/10;

printf("The sum of entered 10 numbers is: %d\n",sum);
printf("The mean of entered 10 numbers is: %d\n",mean);
return 0;
}
