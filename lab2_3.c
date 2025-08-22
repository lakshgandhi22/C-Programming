//wap to calculate net salary
#include<stdio.h>
int main()
{
float gs,ns;

printf("enter your gross salary[gs] : \n");
scanf("%f" ,&gs);

if(gs>10000)
     {
       ns = gs + 0.1*gs - 0.03*gs;
       printf("the net salary is %f" ,ns);
     }

else if(gs>5000)
     {
       ns = gs + 0.07*gs - 0.02*gs;
       printf("the net salary is %f" ,ns);
     }

if(gs<5000)
     {
       ns = gs ;
       printf("the net salary is %f" ,ns);
     }

return 0;

}
