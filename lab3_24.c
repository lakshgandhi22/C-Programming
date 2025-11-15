#include <stdio.h>

int reverseNum(int n, int rev) {
    if(n == 0)
        return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Reversed = %d\n", reverseNum(num, 0));
    return 0;
}