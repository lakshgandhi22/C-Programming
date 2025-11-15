#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter any string in uppercase within size 50 :\n");
    gets(str);
    printf("%s",strlwr(str));
    return 0;
}
