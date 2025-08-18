#include <stdio.h>
#include <ctype.h>

#define MIN_SIZE 1
#define MAX_SIZE 21

int main(void)
{
    char letter;
    int size;

    printf("Enter capital letter: ");
    scanf(" %c", &letter);

    // בדיקת תקינות האות
    if (letter < 'A' || letter > 'Z')
    {
        printf("error input Letter\n");
        return 0;
    }

    printf("Enter size (odd between 1 and 21): ");
    scanf("%d", &size);

    // בדיקת טווח
    if (size < MIN_SIZE || size > MAX_SIZE)
    {
        printf("error input Size\n");
        return 0;
    }

    // בדיקת זוגיות
    if (size % 2 == 0)
    {
        printf("Size is not odd\n");
        return 0;
    }

    int half = size / 2;

    // חלק עליון (אות גדולה)
    for (int i = 0; i <= half; i++)
    {
        // רווחים בצד שמאל
        for (int s = 0; s < i; s++)
            printf(" ");

        // הדפסת אותות
        for (int j = 0; j < size - 2 * i; j++)
            printf("%c", letter);

        printf("\n");
    }

    // חלק תחתון (אות קטנה)
    char small = tolower(letter);
    for (int i = half - 1; i >= 0; i--)
    {
        // רווחים בצד שמאל
        for (int s = 0; s < i; s++)
            printf(" ");

        // הדפסת אותות
        for (int j = 0; j < size - 2 * i; j++)
            printf("%c", small);

        printf("\n");
    }

    return 0;
}
