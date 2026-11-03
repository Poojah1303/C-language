#include <stdio.h>
void main()
{
    float gs,discount,ns;
    printf("Enter gross sales: ");
    scanf("%f",&gs);

    if(gs>20000)
    {
        discount=gs*15/100;
    }
    else if(gs>10000)
    {
        discount=gs*10/100;
    }
    else
    {
        discount=gs*5/100;
    }

    ns=gs-discount;

    printf("Discount = %f",discount);
    printf("\nNet Sales = %f",ns);
}