#include<stdio.h>
void main()
{
    float area,length,breadth,perimeter;
    printf("ENTER THE LENGTH:\n");
    scanf("%f",&length);
    printf("ENTER THE BREADTH:\n");
    scanf("%f",&breadth);


    area=length*breadth;
    perimeter=2*length+2*breadth;
    printf("THE AREA:%f\n",area); 
    printf("THE PERIMETER:%f\n",perimeter);
}