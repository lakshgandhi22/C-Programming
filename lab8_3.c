#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    int phy, math, chem, total;
};

int main() {
    struct student_data s;

    scanf("%d", &s.roll);
    scanf("%s", s.name);
    scanf("%d %d %d", &s.phy, &s.math, &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("%d %s %d %d %d %d", s.roll, s.name, s.phy, s.math, s.chem, s.total);

    return 0;
}
