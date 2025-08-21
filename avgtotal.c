//wap to calculate the average and total of three subject marks out of 100
#include<stdio.h>
int main()
{
int m1,m2,m3,avg,total;

printf("enter your marks in 1st subject :\n");
scanf("%d", &m1);
printf("enter your marks in 2nd subject :\n");
scanf("%d", &m2);
printf("enter your marks in 3rd subject :\n");
scanf("%d", &m3);

avg = (m1+m2+m3)/3;
total = m1+m2+m3;

printf("the average is %d \n" ,avg);
printf("the total is %d \n" ,total);

return 0;
}