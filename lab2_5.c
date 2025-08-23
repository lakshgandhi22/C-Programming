//wap to calculate the netsales with the different discounts as per gross sales
#include<stdio.h>
int main()
{
int gs,ns;

printf("enter the gross sales[gs] :\n");
scanf("%d" ,&gs);

if(gs>20000)
   {
    ns = gs - 0.15*gs;
    printf("The net sale is %d" ,ns);
   }

else if(gs>10000)
   {
    ns = gs - 0.1*gs;
    printf("The net sale is %d" ,ns);
   }   

else if(gs<10000)
   {
    ns = gs - 0.05*gs;
    printf("The net sale is %d" ,ns);
   }      

return 0;
}