#include <stdio.h>

// Function to perform Bubble Sort on an array in descending order
void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is less than the next element
            if (arr[j] < arr[j + 1]) {
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

    // Perform Bubble Sort to sort the array in descending order
    bubbleSortDescending(array, n);

    // Print the sorted array in descending order
    printf("Sorted array in descending order: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
