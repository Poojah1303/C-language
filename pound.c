#include<stdio.h>
void main()
{
    float dollar,pounds;
    printf("Enter the currency in dollar:\n");
    scanf("%f",&dollar);
    pounds=1.3533*dollar;
    printf("The given dollar in pounds is:%2f\n",pounds);
}