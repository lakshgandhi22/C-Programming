#include<stdio.h>

int addition(int x,int y);
int addition(int x,int y)
{
    return x+y;
}

int subtract(int x,int y);
int subtract(int x,int y)
{
    return x-y;
}

int product(int x,int y);
int product(int x,int y)
{
    return x*y;
}

int divide(int x,int y);
int divide(int x,int y)
{
    return x/y;
}
int main()
{
int a,b,add,sub,prod,div;

printf("Enter number a : \n");
scanf("%d",&a);
printf("Enter number b : \n");
scanf("%d",&b);

add = addition(a,b);
sub = subtract(a,b);
prod = product(a,b);    
div = divide(a,b);

printf("Addition of %d and %d is : %d\n",a,b,add);
printf("Subtraction of %d and %d is : %d\n",a,b,sub);
printf("Product of %d and %d is : %d\n",a,b,prod);
printf("Division of %d and %d is : %d\n",a,b,div);
return 0;
}
