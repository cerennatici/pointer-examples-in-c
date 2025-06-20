#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[50];
    char *pStart, *pEnd;
    int check = 1; // 1 means yes, it is a palindrome

    printf("Enter text for palindrome check (max 50 characters): ");
    gets(text);

    printf("Text: %s\n", text);
    pStart = text;
    pEnd = text;

    // Move pEnd to last valid character
    while (*pEnd != '\0') {
        pEnd++;
    }
    pEnd--; // Step back to point to last character (not '\0')

    // Check characters from both ends
    while (pStart < pEnd) {
        if (*pStart != *pEnd) {
            check = 0;
            break;
        }
        pStart++;
        pEnd--;
    }

    if (check == 1) {
        printf("This text is a palindrome.\n");
    } else {
        printf("This text is not a palindrome.\n");
    }

    return 0;
}
