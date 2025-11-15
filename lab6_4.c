#include<stdio.h>
int main()
{
    char books[3][100];

    for(int i=0;i<3;i++)
    {
        printf("Enter the name of book %d : \n",i+1);
        gets(books[i]);
    }
    printf("The names of the books are : \n");
    for(int i=0;i<3;i++)
    {
        puts(books[i]);
    }
return 0;
}
