#include<stdio.h>
void main()
{
    float dollar,rupees;
    printf("Enter the currency in dollar:\n");
    scanf("%f",&dollar);
    rupees=0.0106*dollar;
    printf("The given dollar in rupees is:%2f\n",rupees);

}