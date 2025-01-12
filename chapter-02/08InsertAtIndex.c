#include <stdio.h> 

int main(){

    int array[100];
    int n, element, index;

    // number of elements in array 
     n = 5;

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    } 

    printf("Enter the element to insert: ");
    scanf("%d", &element); 

    printf("Enter the index where you want to insert the element (0 to %d): ", n);
    scanf("%d", &index);

    if (index < 0 || index > n) {
        printf("Invalid index! Please enter a valid index between 0 and %d.\n", n);
        return 1;
    }


    // Shift elements to the right to create space for the new element
    for (int i = n; i > index; i--) {
        array[i] = array[i - 1];
    }

    array[index] = element;
    n++;

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}