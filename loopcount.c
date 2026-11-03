#include <stdio.h>
void main()
{
    int n,count=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        count++;
        n=n/10;
    }

    printf("Total digits = %d",count);
}