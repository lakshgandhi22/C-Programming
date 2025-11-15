#include<stdio.h>
int main()
{
  int i,j,k=0,arr1[4][4],arr2[16];

  printf("Enter the elements of 4*4 matrix :\n");
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
  }

  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
        printf("%d\t",arr1[i][j]);
    }
    printf("\n");
  }

for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
        arr2[k]=arr1[i][j];
        k++;
    }
  }

  printf("After sorting 4*4 matrix in 1d array : \n");
  for(i=0;i<16;i++)
  {
    printf("%d \t",arr2[i]);
  }
    return 0;
}