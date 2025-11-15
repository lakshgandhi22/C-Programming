#include<stdio.h>
int main()
{
    int i,arr[100],largest,smallest;

    for(i=0;i<100;i++)
    {
        arr[i] = i+1;
    }

    largest = smallest = arr[0];
    for(i=0;i<100;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        else if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest element is %d\n",largest);
    printf("Smallest element is %d\n",smallest);
return 0;
}
