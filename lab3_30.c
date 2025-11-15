#include <stdio.h>
int main() {
    int i,j,c;
    for(i=1;i<=500;i++)
    {
        c=0;
        for(j=1;j<=i;j++) 
        if(i%j==0) 
        c++;
        if(c==2) 
        printf("%d ",i);
    }
    return 0;
}