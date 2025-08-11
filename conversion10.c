//wap to calculate the simple interest
#include<stdio.h>
int main()
{
float p,r,n,i;

printf("enter the principal[p] : \n");
scanf("%f", &p);
printf("enter the rate of interest[r] : \n");
scanf("%f", &r);
printf("enter the time period in years[n] : \n");
scanf("%f", &n);

i = p*r*n/100;

printf("the simple interest of entered data is %f" ,i);

return 0;
}