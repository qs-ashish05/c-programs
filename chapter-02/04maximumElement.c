#include <stdio.h>

int main() {
    int array[] = {25, 10, 7, 50, 15}; 
    int n = sizeof(array) / sizeof(array[0]); 
    int max = array[0]; 

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i]; 
        }
    }

    printf("The maximum element in the array is: %d\n", max);
    return 0;
}
