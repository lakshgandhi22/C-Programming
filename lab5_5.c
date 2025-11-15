#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],copy[50];
    printf("Enter any string within size 50 :\n");
    gets(str);
    strcpy(copy,str);
    puts(copy);
    puts(str);
    return 0;
}
