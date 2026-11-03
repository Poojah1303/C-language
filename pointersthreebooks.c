#include <stdio.h>

void main()
{
    char book1[100], book2[100], book3[100];

    char *books[3];

    books[0] = book1;
    books[1] = book2;
    books[2] = book3;

    printf("Enter three book names:\n");

    for(int i = 0; i < 3; i++)
    {
        fgets(books[i], 100, stdin);
    }

    printf("Book names are:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%s", books[i]);
    }
}