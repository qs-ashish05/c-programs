#include <stdio.h>

int main() {
    int array[] = {25, 10, 7, 50, 15}; 
    int n = sizeof(array) / sizeof(array[0]); 
    int max = array[0];
    int min = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i]; 
        }
    }

    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i]; 
        }
    }

    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}
