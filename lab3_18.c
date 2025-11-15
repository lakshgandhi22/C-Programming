#include<stdio.h>
int main()
{
    int i,countboys=0,countgirls=0;
    char gender[50];

    for(i=0;i<50;i++)
    {
        printf("Enter the gender of the %d student (m/f) : \n",i+1);
        scanf(" %c",&gender[i]);

        if(gender[i]=='m' || gender[i]=='M')
        {
            countboys = countboys + 1;
        }
        else if(gender[i]=='f' || gender[i]=='F')
        {
            countgirls = countgirls + 1;
        }
    }
printf("Number of boys : %d\n",countboys);
printf("Number of girls : %d\n",countgirls);
return 0;
}



