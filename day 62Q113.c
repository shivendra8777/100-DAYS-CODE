#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];   // overall maximum
    int currSum = arr[0];    // current subarray sum

    for(int i = 1; i < n; i++) {
        // Either extend the current subarray or start a new one
        if(currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];

        // Update global max
        if(currSum > maxSoFar)
            maxSoFar = currSum;
    }

    printf("%d\n", maxSoFar);

    return 0;
}
