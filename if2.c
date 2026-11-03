#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a, &b);
    if(a>b)
    {
        printf("%d is the largest number. ",a);
        printf("%d is the smallest number. ",b);
    }

    else
    {
       printf("%d is the largest number. ",b);
       printf("%d is the smallest number. ",a); 
    }

}