#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(array) / sizeof(array[0]); 

    printf("Elements of the array:\n");

    // Traverse the array using a for loop
    for (int i = 0; i < n; i++) {
        printf(" The element at %d index is - %d \n", i,array[i]);
    }
    return 0;
}
