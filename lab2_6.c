//wap to calculate the total and average of three subjects out of 100
#include<stdio.h>
int main()
{
float m1,m2,m3,total,avg;

printf("Enter the marks of 1st subject : \n");
scanf("%f" ,&m1);
printf("Enter the marks of 2nd subject : \n");
scanf("%f" ,&m2);
printf("Enter the marks of 3rd subject : \n");
scanf("%f" ,&m3);

total =m1+m2+m3;
avg = (m1+m2+m3)/3;

if(m1<35 || m2<35 || m3 <35)
   {
    printf("Fail");
   }

else if(avg>=70)
   {
    printf("distinction \n");
   }

else if(avg>=60)
   {
    printf("First class \n");
   }

else if(avg>=50)
   {
    printf("Second class\n");
   }   

else if(avg>=35)
   {
    printf("Third class\n");
   }

else if(avg<35)
   {
    printf("Fail \n");
   }

return 0;   
}