#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    fp = fopen("input.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;
    }

    rewind(fp);
    char prev = ' ';
    while ((ch = fgetc(fp)) != EOF) {
        if (!isspace(ch) && isspace(prev))
            words++;
        prev = ch;
    }

    printf("Lines=%d Words=%d Characters=%d Spaces=%d", lines, words, chars, spaces);
    fclose(fp);
    return 0;
}