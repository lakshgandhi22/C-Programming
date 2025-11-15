#include <stdio.h>
int main() {
    int i,j,c,cnt=0;
    for(i=1;i<=500;i++)
    {
        c=0;
        for(j=1;j<=i;j++) 
        if(i%j==0) 
        c++;
        if(c==2) 
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}