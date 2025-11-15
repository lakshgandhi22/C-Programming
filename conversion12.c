//wap to calculate area and perimeter of a rectangle
#include<stdio.h>
int main()
{
float l,w,a,p;

printf("enter the length[l] of rectangle : \n");
scanf("%f", &l);
printf("enter the width[w] of rectangle : \n");
scanf("%f", &w);

a = l*w;
p = 2*(l+w);

printf("the area of the rectangle is %f" ,a);
printf("the perimeter of the rectangle is %f" ,p);

return 0;

}