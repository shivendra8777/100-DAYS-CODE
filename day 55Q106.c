#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = -1;

    // Check each element's frequency
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] == nums[i]) {
                count++;
            }
        }

        if(count > n/2) {
            majority = nums[i];
            break;     // majority found
        }
    }

    printf("%d\n", majority);

    return 0;
}
