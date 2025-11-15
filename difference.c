//wap to do difference of two numbers
#include<stdio.h>
int main()
{
int number1,number2,difference;
printf("enter the number1 :\n");
scanf("%d", &number1);

printf("enter the number2 :\n");
scanf("%d", &number2);

difference = number1 - number2;

printf("the difference of the numbers is %d", difference);

return 0;
}