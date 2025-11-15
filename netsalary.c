//wap to calulate the net salary
#include<stdio.h>
int main(){
int gs,netsalary;
printf("enter your gross salary\n");
scanf("%d", &gs);

netsalary=gs + 0.1*gs - 0.03*gs;

printf("Your net salary is %d" ,netsalary);

return 0;
}