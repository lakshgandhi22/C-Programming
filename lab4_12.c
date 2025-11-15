#include<stdio.h>
int main()
{
    int i,arr1[10],arr2[11];

    printf("Enter 10 elements in the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=1;i<11;i++)
    {
        arr2[i]=arr1[i-1];
    }

    printf("Enter the element which we had to insert at the beginning of the array \n");
    scanf("%d",&arr2[0]);
    

    printf("The new array after inserting is : \n");
    for(i=0;i<11;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}