#include<stdio.h>
int main()
{
    int i,n=3,arr1[10],arr2[10+n];

    printf("Enter 10 elements in the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the no. of positions upto which the elements of the array is to be shifted \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        arr2[i]=0;
    }

    for(i=n;i<10+n;i++)
    {
        arr2[i]=arr1[i-n];
    }

    printf("The new array after shifting is : \n");
    for(i=0;i<10+n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}