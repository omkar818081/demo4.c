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

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    // Print the sum
    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}
