#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int lastIndex[256];  // ASCII characters
    int n, i, start, maxLen;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    n = strlen(s);
    if(s[n-1] == '\n') n--; // Remove newline

    // Initialize all indices as -1
    for(i = 0; i < 256; i++)
        lastIndex[i] = -1;

    maxLen = 0;
    start = 0;

    for(i = 0; i < n; i++) {
        // If character seen before, move start
        if(lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }

        lastIndex[(int)s[i]] = i;
        if(i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d\n", maxLen);

    return 0;
}
