#include<stdio.h>
int main()
{
    int i,j=0,a1[5],a2[10];
    
    printf("Enter the elements in first array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }

    for(i=0;i<5;i++)
    {
        a2[j]=a1[i];
        j=j+2;
    }

    for(i=1;i<10;i+=2)
    {
        a2[i]=0;
    }

    printf("The new array a2 is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a2[i]);
    }
    return 0;
}