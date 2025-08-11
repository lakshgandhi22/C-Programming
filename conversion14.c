//wap to calculate area of triangle
#include<stdio.h>
int main()
{
float l,h,a;

printf("enter the length of the triangle : \n");
scanf("%f", &l);
printf("enter the height of the triangle : \n");
scanf("%f", &h);

a = 0.5*l*h;

printf("the area of the triangle is %f" ,a);

return 0;
}