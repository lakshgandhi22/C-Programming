#include <stdio.h>
int main() {
    int n,t,s=0,d;
    scanf("%d",&n);
    t=n;
    while(t>0){
        d=t%10;
        s+=d*d*d;
        t/=10;
    }
    if(s==n) printf("Armstrong"); 
    else printf("Not Armstrong");
    return 0;
}