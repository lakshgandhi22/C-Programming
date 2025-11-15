#include<stdio.h>
int main()
{
int i,j,k,arr1[2][2],arr2[2][2],arr3[2][2],arr4[2][2],arr5[2][2];
printf("Enter the elements of first 2*2 matrix : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
}

printf("Enter the elements of second 2*2 matrix : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&arr2[i][j]);
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
       arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
       arr4[i][j]=arr1[i][j]-arr2[i][j];
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
       arr5[i][j]=0;
       for(k=0;k<2;k++)
       {
           arr5[i][j]=arr5[i][j]+(arr1[i][k]*arr2[k][j]);
       }
    }
}

printf("The sum of two matrices is : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t", arr3[i][j]);
    }
    printf("\n");
}

printf("The difference of two matrices is : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t", arr4[i][j]);
    }
    printf("\n");
}

printf("The product of two matrices is : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t", arr5[i][j]);
    }
    printf("\n");
}
    return 0;
}