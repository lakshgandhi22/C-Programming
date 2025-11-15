#include<stdio.h>
int main()
{
    int i,j,arr[3][3],* ptr = &arr[0][0],largest,smallest;
    printf("Enter the elements of 3*3 matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    largest = smallest = *ptr;

    for(i=0;i<9;i++)
    {
        if(* (ptr+i)>largest)
        {
            largest = * (ptr+i);
        }
        else if(* (ptr+i)<smallest)
        {
            smallest = * (ptr+i);
        }
    }
    printf("Largest element is %d\n",largest);
    printf("Smallest element is %d\n",smallest);
return 0;
}
