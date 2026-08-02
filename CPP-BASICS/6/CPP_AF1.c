#include <stdio.h>
#include <stdlib.h>
int main()
{
    // malloc
    // Dynamic Memory Allocation
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Populate the array
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;

    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    // calloc
    int *ptr2 = (int *)calloc(5, sizeof(int));
    // Checking if failed or pass
    if (ptr2 == NULL)
    {
        printf("Allocation Failed");
        exit(0);
    }

    // No need to populate as already
    // initialized to 0

    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr2[i]);

    // realloc

    int *ptr3 = (int *)malloc(5 * sizeof(int));

    // Resize the memory block to hold 10 integers
    ptr3 = (int *)realloc(ptr3, 10 * sizeof(int));

    // Check for allocation failure
    if (ptr3 == NULL)
    {
        printf("Memory Reallocation Failed");
        exit(0);
    }

    // free()

    free(ptr);
    free(ptr2);
    free(ptr3);
    return 0;
}
