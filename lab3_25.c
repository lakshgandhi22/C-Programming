#include <stdio.h>
int main() {
    int n,t,r=0;
    scanf("%d",&n);
    t=n;
    while(t>0){
        r=r*10+t%10;
        t/=10;
    }
    if(r==n) printf("Palindrome"); 
    else printf("Not Palindrome");
    return 0;
}