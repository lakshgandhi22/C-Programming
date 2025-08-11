//wap to calculate area and perimeter of a square
#include<stdio.h>
int main()
{
float l,a,p;

printf("enter the length[l] of square : \n");
scanf("%f", &l);

a = l*l;
p = 4*l;

printf("the area of the square is %f" ,a);
printf("the perimeter of the square is %f" ,p);

return 0;

}