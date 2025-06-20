#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strlen()

int main()
{
    char text[100], word[50];
    char *p, *q;
    int frequency = 0;

    // Get text input from user
    printf("Enter a text (max 100 characters): ");
    fgets(text, sizeof(text), stdin);

    // Get word to search
    printf("Enter the word to find (max 50 characters): ");
    fgets(word, sizeof(word), stdin);

    // Remove newline if exists
    if (text[strlen(text) - 1] == '\n')
        text[strlen(text) - 1] = '\0';

    if (word[strlen(word) - 1] == '\n')
        word[strlen(word) - 1] = '\0';

    // Start checking from beginning of the text
    for (p = text; *p != '\0'; p++)
    {
        // If first letters match
        if (*p == *word)
        {
            char *tempP = p;
            q = word;

            // Check all characters
            while (*q != '\0' && *tempP == *q)
            {
                tempP++;
                q++;
            }

            // If we finished the word, it means it matched
            if (*q == '\0')
            {
                frequency++;
            }
        }
    }

    // Print result
    printf("\nThe word '%s' found %d times in the text.\n", word, frequency);

    return 0;
}
