#include<stdio.h>
int main()
{
    int i,n,position,arr1[5],arr2[6];

    printf("Enter 5 elements in the array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the element which we had to insert at the given position of the array of size 5 : \n");
    scanf("%d",&n);
    printf("Enter the position at which we have to insert an element in the array of size 5 : \n");
    scanf("%d",&position);

    for(i=0;i<position;i++)
    {
        arr2[i]=arr1[i];
    }

    arr2[position]=n;

    for(i=position+1;i<6;i++)
    {
        arr2[i]=arr1[i-1];
    }

    printf("The new array after inserting is : \n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",arr2[i]);
    }
return 0;
}
