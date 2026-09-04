#include<stdio.h>
void main()
{
    float hours,minutes;
    printf("Enter the time in minutes:\n");
    scanf("%f",&minutes);
    hours=minutes/60;
    printf("The given time in hours is:%2f\n",hours); 
}