#include<stdio.h>
int main()
{
    int i,arr1[5],arr2[4];

    printf("Enter 5 elements in the array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i+1];
    }

    printf("The new array after deleting the first element is : \n");
    for(i=0;i<4;i++)
    {
        printf("%d \t",arr2[i]);
    }
return 0;
}
