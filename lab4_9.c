#include<stdio.h>
int main()
{
  int arr[5]={1,2,3,4,5},temp;

  temp=arr[0];
  arr[0]=arr[4];
  arr[4]=temp;

  temp=arr[1];
  arr[1]=arr[3];
  arr[3]=temp;

    printf("The reversed array is : \n");

    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
