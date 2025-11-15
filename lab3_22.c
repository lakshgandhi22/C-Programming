#include <stdio.h>

int countDigits(int n) {
    if(n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num == 0) printf("Digits = 1\n");
    else printf("Digits = %d\n", countDigits(num));
    return 0;
}