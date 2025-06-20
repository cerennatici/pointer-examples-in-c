#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size, i, j, temp;
    int *pointer;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    pointer = array;

    srand(time(NULL)); // Random seed for different values each time

    printf("Unsorted array: ");
    for (i = 0; i < size; i++)
    {
        *(pointer + i) = rand() % 30; // Generate random numbers between 0-29
        printf("%d ", *(pointer + i));
    }

    // Sort the array in ascending order using pointers
    printf("\nSorted array (ascending): ");
    for (i = 0; i < size; i++)
    {
        for (j = i+1 ; j < size; j++)
        {
            if (*(pointer + i) > *(pointer + j))
            {
                temp = *(pointer + i);
                *(pointer + i) = *(pointer + j);
                *(pointer + j) = temp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(pointer + i));
    }

    return 0;
}
