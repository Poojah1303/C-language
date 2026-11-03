#include <stdio.h>
void main()
{
    int i;
    char name[100];

    printf("Enter your name: ");
    scanf("%s",name);

    for(i=1;i<=5;i++)
    {
        printf("%s",name);
    }
}