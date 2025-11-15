#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    fp = fopen("output.txt", "w");

    while (1) {
        gets(str);
        if (str[0] == '\0')
            break;
        fputs(str, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    return 0;
}