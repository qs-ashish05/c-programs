#include <stdio.h>

int main() {
    int array[100]; // Declare an array with a large enough size
    int n, element;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insert the element at the end
    array[n] = element;
    n++; // Increment the size of the array

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
