#include <stdio.h>
#include <ctype.h>

void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase = %s", str);
}