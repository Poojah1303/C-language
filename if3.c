#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest.",a);
        }
        else
        {
            if(b>c)
            {
                printf("%d is the smallest.",c);

            }
            else
            {
                printf("%d is the smallest.",b);
            }
        }
       
    }
    else 
    {
        if(a>c)
        {
            printf("%d is the largest.",b);
            printf("%d is the smallest.",c);
        }
        else
        {
            printf("%d is the largest.",b);
            printf("%d is the smallest.",a);
        }
    }
}