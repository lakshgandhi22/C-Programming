#include<stdio.h>
#include<string.h>
int main()
{
    char str[6];
    printf("Enter any string within size 5 :\n");
    gets(str);
    
    for(int i=0;i<6;i++)
    {
            if(str[i]<='Z' && str[i]>='A')
            {
                str[i]=str[i]+32;
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
    }
    puts(str);
    return 0;
}
