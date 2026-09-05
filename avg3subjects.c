#include<stdio.h>
void main()
{
    int f,s,t,avg,total;
    printf("ENTER THE MARKS OF FIRST SUBJECT:\n");
    scanf("%d",&f);
    printf("ENTER THE MARKS OF SECOND SUBJECT:\n");
    scanf("%d",&s);
    printf("ENTER THE MARKS OF SECOND SUBJECT:\n");
    scanf("%d",&t);
    total=f+s+t;
    avg=total/3;
    printf("THE TOTAL OF THREE SUBJECTS IS:%d\n",total);
    printf("THE AVERAGE OF THREE SUBJECTS IS:%d\n",avg);
    
}