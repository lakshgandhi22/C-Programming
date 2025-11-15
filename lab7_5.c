#include<stdio.h>
int findmaxmin(int arr[],int n);
int findmaxmin(int arr[],int n)
{
    int max,min;
    max=min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum value is : %d\n",max);
    printf("Minimum value is : %d\n",min);
    return 0;
}
int main()
{
    int arr[5],i,max,min;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    findmaxmin(arr,5);

return 0;
}
