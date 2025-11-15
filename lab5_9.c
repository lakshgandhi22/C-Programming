#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter first string (max 50 characters):\n");
    gets(str1);
    printf("Enter second string (max 50 characters):\n");
    gets(str2);

    strcat(str1,str2);

    printf("Concatenated string is:\n");
    puts(str1);  
    return 0;
}