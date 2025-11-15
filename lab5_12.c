#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[10] = {'a','e','i','o','u','A','E','I','O','U'},count[10]={0};
    printf("Enter any string within size 50 :\n");
    gets(str1);

    int i,j,length = strlen(str1);

    for(i=0;i<length;i++)
    {
        for(j=0;j<10;j++)
        {
            if(str1[i] == str2[j])
            {
                count[j]++;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("The number of %c in the string is : %d \n",str2[i],count[i]);
    }
    return 0;
}