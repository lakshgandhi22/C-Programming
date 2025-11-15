#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter any string within size 50 :\n");
    gets(str);
    strrev(str);
    puts(str);
    return 0;
}
