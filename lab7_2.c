#include<stdio.h>
int checkyear(int year);
int checkyear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year;
    printf("Enter the year : \n");
    scanf("%d",&year);


    int result = checkyear(year);

    if(result==1)
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }

return 0;
}
