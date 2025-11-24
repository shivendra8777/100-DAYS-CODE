#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0, start = 0, wordCount = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    // Find total words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            wordCount++;
    }
    wordCount++;  // total words = spaces + 1

    int currentWord = 1;
    start = 0;
    i = 0;

    printf("Output: ");

    while (name[i] != '\0') {

        // When a word ends or we reach end of string
        if (name[i] == ' ' || name[i+1] == '\0') {

            int end = (name[i] == ' ' ? i - 1 : i);

            if (currentWord < wordCount) {
                // Print initial
                printf("%c ", name[start]);
            } else {
                // Print full surname
                for (int j = start; j <= end; j++)
                    printf("%c", name[j]);
            }

            currentWord++;
            start = i + 1;
        }
        i++;
    }

    printf("\n");
    return 0;
}
