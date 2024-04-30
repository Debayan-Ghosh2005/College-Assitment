#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    printf("Abbreviation: ");
    if (str[0] >= 'a' && str[0] <= 'z') {
        printf("%c", str[0] - 32);
    } else {
        printf("%c", str[0]);
    }
    for (i = 1; i < len; i++) {
        if (str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i] - 32);
            } else {
                printf(".%c", str[i]);
            }
        }
    }
    printf("\n");

    return 0;
}
