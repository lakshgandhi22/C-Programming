#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter any string within size 50 :\n");
    gets(str);
    strrev(str);

    int length = strlen(str);

    for (int i=0;i<length;i++)
    {
        printf("%c \n",str[i]);
    }
    return 0;
}
