#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Length = %d", strlen(str));
}