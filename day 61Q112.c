#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }

    // For each window
    for(int i = 0; i <= n - k; i++) {

        int firstNeg = 0;   // default = 0 (if no negative found)

        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }

        printf("%d ", firstNeg);
    }

    printf("\n");
    return 0;
}
