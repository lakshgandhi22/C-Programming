#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    fp = fopen("record.csv", "w");

    while (1) {
        printf("Roll: ");
        scanf("%d", &roll);
        printf("Name: ");
        scanf("%s", name);
        fprintf(fp, "%d,%s\n", roll, name);
        char ch;
        printf("More (y/n)? ");
        scanf(" %c", &ch);
        if (ch == 'n' || ch == 'N')
            break;
    }

    fclose(fp);
    return 0;
}