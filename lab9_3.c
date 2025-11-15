#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];
    fp = fopen("input.txt", "r");

    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    fclose(fp);
    return 0;
}