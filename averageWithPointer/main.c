#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pointer;
    int size, total = 0;
    double average = 0;  // Changed float to double for better precision

    // Ask user for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    srand(time(NULL)); // Seed the random number generator

    // Fill array with random numbers and calculate total
    printf("Elements of the array: ");
    for (pointer = array; pointer < array + size; pointer++)
    {
        *pointer = rand() % 30;   // Generate a random number between 0-29
        printf("%d ", *pointer);  // Print the value
        total += *pointer;        // Add to total
    }

    // Calculate and print average
    average = (double) total / size;  // Cast to double for decimal result
    printf("\nTotal: %d\n", total);
    printf("Average: %.2lf", average);  // Print average with 2 decimal places

    return 0;
}
