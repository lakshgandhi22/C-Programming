//wap to find smallest and largest of two numbers
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter any number a : \n");
    scanf("%d" ,&a);
    printf("Enter any number b : \n");
    scanf("%d" ,&b);
    printf("Enter any number c : \n");
    scanf("%d" ,&c);


    if(a>b && b>c)
    {
        printf("a is largest \n");
        printf("c is smallest\n");
    }

    else if(a>c && c>b)
    {
        printf("a is largest \n");
        printf("b is smallest\n");
    }

    else if(b>a && a>c)
    {
        printf("b is largest \n");
        printf("c is smallest\n");
    }

    else if(b>c && c>a)
    {
        printf("b is largest \n");
        printf("a is smallest\n");
    }

    else if(c>a && a>b)
    {
        printf("c is largest \n");
        printf("b is smallest\n");
    }

    else if(c>b && b>a)
    {
        printf("c is largest \n");
        printf("a is smallest\n");
    }

 return 0;

}

