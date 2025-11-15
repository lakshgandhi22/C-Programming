//wap to calculate area of circle
#include<stdio.h>
int main()
{
float r,a;

printf("enter the radius of the circle : \n");
scanf("%f", &r);

a = (3.14)*r*r;

printf("the area of the circle is %f" ,a);

return 0;
}