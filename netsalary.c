#include<stdio.h>
void main()
{
    int g,a,d,net;
    printf("ENTER THE GROSS SALARY:\n");
    scanf("%d",&g);
    a=g/10;
    d=3*g/10;
    net=g+a-d;
    printf("The net salary in the required case :%d\n",net);
  
}