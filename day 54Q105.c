#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    long long x = sqrt(total);

    if (x * x == total) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
