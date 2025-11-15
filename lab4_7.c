#include<stdio.h>
int main()
{
 int arr[4][4],i,j,temp;

 printf("Enter the elements of 4*4 matrix\n");
 for(i=0;i<4;i++)
 {
    for(j=0;j<4;j++)
    {
        scanf("%d",&arr[i][j]);
    }
 } 

for(i=0;i<4;i++)
{
    for(j=i+1;j<4;j++)
    {
        temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}

printf("The transpose of the matrix is :\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}