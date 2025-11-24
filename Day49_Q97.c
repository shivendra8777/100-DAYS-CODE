#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    // Input full name
    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Print first character (first initial)
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c", str[0]);

    // Print initials after every space
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            printf("%c", str[i+1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
