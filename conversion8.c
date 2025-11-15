//wap to convert the temperature from celcius to fehrenheit
#include<stdio.h>
int main()
{
float C,F;

printf("enter any temperature : \n");
scanf("%f", &C);

F = (C*1.8) + 32;

printf("the entered temperature from celcius to fahrenheit is %f" ,F);

return 0;
}