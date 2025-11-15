#include <stdio.h>

int digitSum(int n) {
    if(n == 0)
        return 0;
    return (n % 10) + digitSum(n / 10);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", digitSum(num));
    return 0;
}