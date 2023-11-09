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

    // Count the frequency of each element
    int frequency[n];
    for (int i = 0; i < n; ++i) {
        frequency[i] = -1;  // Initialize frequency array to -1
    }

    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0;  // Mark duplicate elements
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    // Print the frequency of each element
    printf("Frequency of each element in the array:\n");
    for (int i = 0; i < n; ++i) {
        if (frequency[i] != 0) {
            printf("%d occurs %d times\n", array[i], frequency[i]);
        }
    }

    return 0;
}
