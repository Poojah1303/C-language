#include <stdio.h>
void main()
{
    float a,b,c,total,avg;

    printf("Enter marks of three subjects: ");
    scanf("%f%f%f",&a,&b,&c);

    total=a+b+c;
    avg=total/3;

    printf("Total = %f",total);
    printf("\nAverage = %f",avg);

    if(a<35 || b<35 || c<35)
    {
        printf("\nGrade = Fail");
    }
    else if(avg>=70)
    {
        printf("\nGrade = Distinction");
    }
    else if(avg>=60)
    {
        printf("\nGrade = First");
    }
    else if(avg>=50)
    {
        printf("\nGrade = Second");
    }
    else
    {
        printf("\nGrade = Third Class");
    }
}