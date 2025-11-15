#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0;i<100;i+=3)
    {
        sum=sum+i;
    }
    printf("The sum of all the numbers which are divisible by 3 between 1 and 100 is %d.\n",sum);
return 0;
}
