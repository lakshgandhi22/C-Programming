#include<stdio.h>
int main()
{
  int i,n,arr1[5];

  printf("Enter 5 elements in the array:\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr1[i]);
  }

  printf("Enter the number which we have to search : \n");
  scanf("%d",&n);

  for(i=0;i<5;i++)
  {
    if(arr1[i] == n)
    {
        printf("the entered no. %d is at %dth position",n,i+1);
    }
  }
    return 0;
}