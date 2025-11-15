#include <stdio.h>

int main() {
    int arr[10];
    int freq[10];
    int i, j, count;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i = 0; i < 10; i++) {
        count = 1;
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
            freq[i] = count;
    }

    printf("\nFrequency of each number:\n");
    for(i = 0; i < 10; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
