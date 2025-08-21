//wap to calculate the net sales 
#include<stdio.h>
int main()
{
int gs,netsales;

printf("enter your gross sale\n");
scanf("%d", &gs);

netsales = gs - 0.1*gs;

printf("Your net sale is %d" ,netsales);

return 0;
}