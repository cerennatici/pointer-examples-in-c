#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char character;
    char *p, *q;

    printf("Enter a text(max character 100): ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the character to delete: ");
    scanf(" %c", &character);

    p = q = text;

    // Karakterleri tek tek kontrol et
    while (*p != '\0') {
        if (*p != character) {
            *q = *p;
            q++;  // sadece gerekli karakterleri kopyala
        }
        p++; // p her karakteri gezer
    }

    *q = '\0'; // yeni son karakter

    printf("Text after deleting '%c': %s\n", character, text);

    return 0;
}
