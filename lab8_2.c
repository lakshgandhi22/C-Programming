#include <stdio.h>
#include <string.h>

struct customer {
    int acc;
    char name[50];
    float bal;
};

void lowBalance(struct customer c[], int n) {
    for(int i=0;i<n;i++)
        if(c[i].bal < 100)
            printf("%d %s\n", c[i].acc, c[i].name);
}

void transaction(struct customer c[], int n, int ac, float amt, int code) {
    for(int i=0;i<n;i++) {
        if(c[i].acc == ac) {
            if(code == 1)
                c[i].bal += amt;
            else {
                if(c[i].bal < amt)
                    printf("The balance is insufficient for the specified withdrawal");
                else
                    c[i].bal -= amt;
            }
            return;
        }
    }
}

int main() {
    struct customer c[10];
    for(int i=0;i<10;i++) {
        scanf("%d", &c[i].acc);
        scanf("%s", c[i].name);
        scanf("%f", &c[i].bal);
    }

    lowBalance(c, 10);

    int ac, code;
    float amt;
    scanf("%d %f %d", &ac, &amt, &code);

    transaction(c, 10, ac, amt, code);

    return 0;
}