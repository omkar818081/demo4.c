#include <stdio.h>

// Function to perform Bubble Sort on an array in ascending order
void bubbleSortEven(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element (for even numbers only)
            if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 0 && arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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

    // Perform Bubble Sort to sort only even numbers in ascending order
    bubbleSortEven(array, n);

    // Print the sorted array
    printf("Sorted array with even numbers in ascending order: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
