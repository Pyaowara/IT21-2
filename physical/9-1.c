#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    int *arr;

    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int*) malloc(sizeof(int) * (size));

    // Populate the array
    for (i = 0; i < size; i++)
        *(arr+i) = i + 1;
  // Point to the first element of the array
    int *ptr = arr;
    // Print the array in order using pointers
    printf("Array elements in order: ");
    while (i--)
        printf("%d ", *ptr++);

    printf("\n");
    printf("Array elements in reverse: ");
    ptr--;
    while (*ptr >= *arr)
        printf("%d ", *ptr--);  // Move the pointer to the previous element

    // Free the allocated memory
    free(arr);

    return 0;
}