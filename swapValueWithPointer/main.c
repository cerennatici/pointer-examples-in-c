#include <stdio.h>
#include <stdlib.h>

// function to swap two numbers using pointer
void swapValue(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // before swapping
    printf("\nBefore swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // address of the values
    swapValue(&a, &b);

    // after swapping
    printf("\nAfter swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
