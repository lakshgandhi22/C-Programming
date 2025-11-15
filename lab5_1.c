#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter any string within size 50 :\n");
    gets(str);
    printf("%d",strlen(str));
    return 0;
}

