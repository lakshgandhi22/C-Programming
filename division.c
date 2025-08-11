//wap to do division of two numbers
#include<stdio.h>
int main()
{
int number1,number2,division;
printf("enter the number1 :\n");
scanf("%d", &number1);

printf("enter the number2 :\n");
scanf("%d", &number2);

division = number1 / number2;

printf("the division of the numbers is %d", division);

return 0;
}