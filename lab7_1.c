#include<stdio.h>
 int power(int a,int b);
 int power(int a,int b)
 {
     if(b==0)
     {
         return 1;
     }
     else
     {
         return a*power(a,b-1);
     }
 }
int main()
{
    int a,b;
    printf("Enter the base[a] : \n");
    scanf("%d",&a);
    printf("Enter the powerent[b] : \n");
    scanf("%d",&b);
   
    int result = power(a,b);

    printf("The result of %d^%d is : %d\n",a,b,result);
return 0;
}
