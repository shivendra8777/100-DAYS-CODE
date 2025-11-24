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

    for(int i = 0; i <= n - k; i++) {

        int max = arr[i];   // assume first element is max

        // check the rest of the window
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
