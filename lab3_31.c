#include <stdio.h>
int main() {
    int i,j,c,s=0;
    for(i=1;i<=500;i++)
    {
        c=0;
        for(j=1;j<=i;j++) 
        if(i%j==0) 
        c++;
        if(c==2) 
        s+=i;
    }
    printf("%d",s);
    return 0;
}