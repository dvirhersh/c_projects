#include <stdio.h>
#include <stdlib.h>

char *generate_password(int length)
{
    char *password = malloc(length + 1);
    if (password == 0)
        exit(1); // Memory allocation failed
    for (int i = 0; i < length; i++)
        password[i] = 'a' + rand() % ('z' - 'a');
    password[length] = '\0';
    return password;
}

int main()
{
    while (1)
    {
        int n;
        printf("Enter the length of the password:\n");
        scanf("%d", &n);
        if (n > 0)
            printf("The password is: %s\n", generate_password(n)); // memory leak!
    }
    return 0;
}