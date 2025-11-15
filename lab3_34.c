#include <stdio.h>
int main() {
    int n,a=1,b=1,i,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        t=b;
        b=a+b;
        a=t;
    }
    return 0;
}