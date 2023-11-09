#include <stdio.h>

// Function to perform Bubble Sort on an array in ascending order
void bubbleSortAscending(int arr[], int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Bubble Sort on an array in descending order
void bubbleSortDescending(int arr[], int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - 1; ++j) {
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

    // Calculate the midpoint of the array
    int mid = n / 2;

    // Sort the first half of the array in ascending order
    bubbleSortAscending(array, 0, mid);

    // Sort the second half of the array in descending order
    bubbleSortDescending(array, mid, n);

    // Print the sorted array
    printf("Sorted array (first half ascending, second half descending): ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
