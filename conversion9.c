//wap to convert the temperature from fahrenheit to celcius
#include<stdio.h>
int main()
{
float C,F;

printf("enter any temperature : \n");
scanf("%f", &F);

C = (F-32)*5/9 ;

printf("the entered temperature from fahrenheit to celcius is %f" ,C);

return 0;
}