#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int n) {
    int max = arr[0];
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

// Function to find the minimum element in an array
int findMin(int arr[], int n) {
    int min = arr[0];
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    return min;
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

    // Find and print the maximum element
    printf("Maximum element in the array: %d\n", findMax(array, n));

    // Find and print the minimum element
    printf("Minimum element in the array: %d\n", findMin(array, n));

    return 0;
}
