#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *words[20];
    int count = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    char *token = strtok(name, " \n");
    while(token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \n");
    }

    for(int i = 0; i < count - 1; i++) {
        printf("%c. ", words[i][0]);
    }

    printf("%s", words[count - 1]);

    return 0;
}
