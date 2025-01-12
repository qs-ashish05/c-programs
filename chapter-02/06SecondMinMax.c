#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

void findSecondMaxMin(int array[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Update max1 and max2
        if (array[i] > max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2 && array[i] != max1) {
            max2 = array[i];
        }

        // Update min1 and min2
        if (array[i] < min1) {
            min2 = min1;
            min1 = array[i];
        } else if (array[i] < min2 && array[i] != min1) {
            min2 = array[i];
        }
    }

    // Check if second max and second min exist
    if (max2 == INT_MIN || min2 == INT_MAX) {
        printf("Array does not have enough unique elements.\n");
    } else {
        printf("Second Maximum: %d\n", max2);
        printf("Second Minimum: %d\n", min2);
    }
}

int main() {
    int array[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(array) / sizeof(array[0]);

    findSecondMaxMin(array, n);

    return 0;
}
