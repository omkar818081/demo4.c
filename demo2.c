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

    // Print elements in reverse order
    printf("Elements in reverse order: ");
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    return 0;
}
