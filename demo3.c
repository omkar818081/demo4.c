#include <stdio.h>

// Function to check if a number is present in the array
int isNumberPresent(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return 1; // Number is present
        }
    }
    return 0; // Number is not present
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

    // Input the number to check
    int key;
    printf("Enter a number to check in the array: ");
    scanf("%d", &key);

    // Check if the number is present in the array
    if (isNumberPresent(array, n, key)) {
        printf("%d is present in the array.\n", key);
    } else {
        printf("%d is not present in the array.\n", key);
    }

    return 0;
}
