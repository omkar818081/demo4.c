#include <stdio.h>

int main() {
    // Static memory allocation for an array of size n
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    // Count variables for elements less than, greater than, and equal to zero
    int lessThanZeroCount = 0, greaterThanZeroCount = 0, equalToZeroCount = 0;

    // Count elements
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) {
            lessThanZeroCount++;
        } else if (array[i] > 0) {
            greaterThanZeroCount++;
        } else {
            equalToZeroCount++;
        }
    }

    // Print the counts
    printf("Number of elements less than zero: %d\n", lessThanZeroCount);
    printf("Number of elements greater than zero: %d\n", greaterThanZeroCount);
    printf("Number of elements equal to zero: %d\n", equalToZeroCount);

    return 0;
}
