#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,length,condition;
    printf("Enter any string within size 50 :\n");
    gets(str);
    length = strlen(str);

    for(int i=0;i<(length/2);i++)
    {
        if(str[i]!=str[length-1-i])
        {
           condition=1;
           break;
        }
    }
    if(condition=0)
    {
        printf("The entered string is a palindrome.\n");
    }
    else
    {
        printf("The entered string is not a palindrome.\n");
    }
return 0;
}
