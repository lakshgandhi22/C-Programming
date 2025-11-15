#include<stdio.h>
int main()
{int a=2,b=4,temp;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    temp=a;
    a=b;
    b=temp;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
 return 0;   
}