#include<stdio.h>
void main()
{
    int g,d,net;
    printf("THE GROSS SALES:\n");
    scanf("%d",&g);
    d=g/10;
    net=g-d;
    printf("The net sales:%d\n",net);
}