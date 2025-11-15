#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
printf("Enter first string :\n");
gets(str1);
printf("Enter second string :\n");
gets(str2);

strcmp(str1,str2);

if(strcmp(str1,str2)==0)
{
    printf("Both strings are equal. \n");
}
else if(strcmp(str1,str2)>0)
{
    printf("String(2) is greater. \n");
}
else if(strcmp(str1,str2)<0)
{
    printf("String(1) is greater. \n");
}
    return 0;
}