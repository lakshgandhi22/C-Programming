#include<stdio.h>
int main()
{
    int i,arr[20];
    
    for(i=1;i<100;i++)
    {
        if(i%5==0)
        {
            arr[(i/5)-1] = i;
        }
    }
    printf("All the numbers which are divisible by 5 between 1 to 100 are : \n");
    for(i=0;i<20;i++)
    {
        printf("%d\n",arr[i]);
    }
return 0;
}
