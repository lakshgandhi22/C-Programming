//wap to do all operations of two numbers a and b
#include<stdio.h>
int main()
{
int a,b,add,sub,product,division;

printf("enter any number a : \n");
scanf("%d" ,&a);
printf("enter any number b : \n");
scanf("%d" ,&b);

add = a+b;
sub = a-b;
product = a*b;
division = a/b;

printf("the addition of two numbers is %d \n" ,add);
printf("the subtraction of two numbers is %d \n" ,sub);
printf("the product of two numbers is %d \n" ,product);
printf("the division of two numbers is %d \n" ,division);

return 0;
}