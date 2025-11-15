#include <stdio.h>
#include <string.h>

struct cricket {
    char name[50];
    int age;
    int test;
    float avg;
};

int main() {
    struct cricket c[10], temp;

    for(int i=0;i<10;i++) {
        scanf("%s", c[i].name);
        scanf("%d", &c[i].age);
        scanf("%d", &c[i].test);
        scanf("%f", &c[i].avg);
    }

    for(int i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
            if(c[i].avg > c[j].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }

    for(int i=0;i<10;i++)
        printf("%s %d %d %.2f\n", c[i].name, c[i].age, c[i].test, c[i].avg);

    return 0;
}