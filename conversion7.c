//wap to convert bytes into KB,MB and GB
#include<stdio.h>
int main()
{
int bytes,kb,mb,gb;

printf("enter bytes : \n");
scanf("%d" ,&bytes);

kb = bytes/1024;
mb = bytes/1048576;
gb = bytes/1073741824;

printf("the entered byte into kb is %d \n" ,kb);
printf("the entered byte into mb is %d \n" ,mb);
printf("the entered byte into gb is %d \n" ,gb);

return 0;
}