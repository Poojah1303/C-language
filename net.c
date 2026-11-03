#include<stdio.h>
void main()
{
    int a,d,net;
    printf("THE GROSS SALES:\n");
    scanf("%d",&a);

    if (a>10000){
        d=10*a/100;
         net=a-d;
        printf("The net sales is :%d\n",net);
        }
   
    else
    {
        d=5*a/100;
        net=a-d;
         printf("The net sales is :%d\n",net);   
    }



}