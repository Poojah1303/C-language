#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter the celcius:\n");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("The given temperature in fahrenheit:%f",f);
}