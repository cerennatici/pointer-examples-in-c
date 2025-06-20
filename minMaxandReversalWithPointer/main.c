#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pointer;
    int min, max, temp, size;

    // Ask the user to enter array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    srand(time(NULL)); // Seed the random number generator

    // Fill the array with random numbers between 0-29
    printf("\nElements of the array: ");
    for (pointer = array; pointer < array + size; pointer++)
    {
        *pointer = rand() % 30;  // Random number between 0-29
        printf("%d ", *pointer); // Print each element
    }

    // Find the minimum and maximum elements in the array
    min = array[0];
    max = array[0];

    for (pointer = array; pointer < array + size; pointer++)
    {
        if (min > *pointer)
        {
            min = *pointer;
        }
        else if (max < *pointer)
        {
            max = *pointer;
        }
    }

    // Print min and max values
    printf("\nMinimum element of the array: %d\n", min);
    printf("Maximum element of the array: %d\n", max);

    // Reverse the array using two pointers
    int *pStart, *pEnd;

    printf("\nOriginal array: ");
    for (pointer = array; pointer < array + size; pointer++)
    {
        printf("%d ", *pointer);  // Print original array
    }

    // Swap elements from start to end
    for (pStart = array, pEnd = array + size - 1; pStart < pEnd; pStart++, pEnd--)
    {
        temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
    }

    // Print reversed array
    printf("\nReversed array: ");
    for (pointer = array; pointer < array + size; pointer++)
    {
        printf("%d ", *pointer);  // Print reversed array
    }

    return 0;
}
