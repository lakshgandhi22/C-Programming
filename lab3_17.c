#include<stdio.h>
int main()
{
    int i,arr[200],countpos=0,countneg=0,countzero=0;

    for(i=0;i<200;i++)
    {
        arr[i] = i-99;
    }
    
    for(i=0;i<200;i++)
    {
        if(arr[i]>0)
        {
            countpos = countpos +1;
        }
        else if(arr[i]<0)
        {
            countneg = countneg +1;
        }
        else if(arr[i]==0)
        {
            countzero = countzero +1;
        }
    }
    printf("Number of positive numbers : %d\n",countpos);
    printf("Number of negative numbers : %d\n",countneg);
    printf("Number of zeros : %d\n",countzero);
return 0;
}
