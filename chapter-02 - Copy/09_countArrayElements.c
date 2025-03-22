#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr [] = {10,20,50,80};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("The length of arrays is: %d", length);

    return 0;
}
