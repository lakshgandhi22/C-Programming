#include <stdio.h>
int main() {
    int n,t,sq,p=1;
    scanf("%d",&n);
    t=n;
    while(t>0){
        p*=10;
        t/=10;
    }
    sq=n*n;
    if(sq%p==n) 
    printf("Automorphic"); 
    else printf("Not Automorphic");
    return 0;
}