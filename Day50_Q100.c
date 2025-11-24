#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);      // reads a single word (no spaces)

    len = strlen(str);

    // Generate all substrings
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            // Print characters from i to j
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
