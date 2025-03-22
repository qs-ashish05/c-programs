#include <stdio.h>

int tournamentMin(int array[], int n) {

    if (n == 1) {
        return array[0];
    }

    // Create a temporary array to store the winners of each pair
    int temp[(n + 1) / 2];
    int k = 0;

    // Compare elements in pairs
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) { // Check if a pair exists
            temp[k++] = (array[i] < array[i + 1]) ? array[i] : array[i + 1];
        } else { // If there's an odd element, pass it directly
            temp[k++] = array[i];
        }
    }

    // Recursive call with the reduced array
    return tournamentMin(temp, k);
}

int main() {
    int array[] = {7, 2, 9, 4, 1, 6};
    int n = sizeof(array) / sizeof(array[0]);

    int min = tournamentMin(array, n);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
