#include<stdio.h>
int main()
{
    int i,k,n,a;
    printf("Enter any multi digit : \n");
    scanf("%d",&a);
    printf("Enter the length of a digit : \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n==i)
        {
            k=a;
        }
        k=a%10;
        a=a/10;
        
        printf("%d,",k);
    }
return 0;
}
