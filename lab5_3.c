#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter any string lowercase within size 50 :\n");
    gets(str);
    printf("%s",strupr(str));
    return 0;
}
