#include<stdio.h>
int swap(int* a,int* b);
int swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main()
{
    int a,b;
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);

    printf("Before swapping : a = %d , b = %d\n",a,b);

    swap(&a,&b);

    printf("After swapping : a = %d , b = %d\n",a,b);
return 0;
}
