#include<stdio.h>
void main()
{
    float a,b,c,d,s,m;
    printf("Enter the numbers:\n");
    scanf("%f %f",&a,&b);
    c=a+b;
    s=a-b;
    d=a/b;
    m=a*b;
    printf("The sum of two numbers is:%f\n",c);
    printf("The subtraction of two numbers is:%f\n",s);
    printf("The multiplication of two numbers is:%f\n",m);
    printf("The division of two numbers is:%f\n",d);


}