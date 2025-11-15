#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        product = product*i;
    }

    printf("Factorial of %d is: %d\n",n,product);
return 0;
}
