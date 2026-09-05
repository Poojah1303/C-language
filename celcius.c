#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter the fahrenheit:\n");
    scanf("%f",&f);
    c=0.55*f-0.55*32;
    printf("The given temperature in celcius:%f",c);
}