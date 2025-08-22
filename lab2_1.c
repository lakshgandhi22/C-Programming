//wap to find smallest and largest of two numbers
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter any number a : \n");
    scanf("%d" ,&a);
    printf("Enter any number b : \n");
    scanf("%d" ,&b);

    if(a<b)
    {
        printf("%d is less than %d" ,a,b);
    }
    else
    {
        printf("%d is greater than %d" ,a,b);
    }
 return 0;
}

