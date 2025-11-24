#include <stdio.h>

void sortArray(int arr[], int n) {
    int temp;
    // Simple Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

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

    if(k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    // Sort array
    sortArray(arr, n);

    // Print kth smallest element
    printf("%d\n", arr[k-1]);

    return 0;
}
