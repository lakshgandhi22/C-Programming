#include<stdio.h>
int main()
{
 int i,j,arr_1[2][2],arr_2[2][2],arr_3[2][2];

 printf("enter the values of first 2*2 matrix\n ");
 for(i=0;i<2;i++)
 {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr_1[i][j]);
        }
 }

 printf("enter the values of second 2*2 matrix\n ");
 for(i=0;i<2;i++)
 {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr_2[i][j]);
        }
 }

for(i=0;i<2;i++)
 {
        for(j=0;j<2;j++)
        {
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        }
 }
 
 printf("The sum of two matrices is : \n");
 for(i=0;i<2;i++)
 {
        for(j=0;j<2;j++)
        {
            printf("%d\t", arr_3[i][j]);
        }
        printf("\n");
 }
    return 0;
}