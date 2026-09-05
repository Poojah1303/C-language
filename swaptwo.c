#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENTER THE INITIAL FIRST NO. :\n");
    scanf("%d",&a);
    printf("ENTER THE INITIAL SECOND NO. :\n");
    scanf("%d",&b);
    c=a;
    a=b;
    printf("The first no. is:%d\n",a);
    b=c;
    printf("The second no. is:%d\n",b);
}