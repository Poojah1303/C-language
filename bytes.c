#include<stdio.h>
void main()
{
    int b,kb,mb,gb;
    printf("Enter the bytes:\n");
    scanf("%d",&b);
    kb=1024*b;
    mb=1024*1024*b;
    gb=1024*1024*1024*b;
    printf("The given bytes in kilobytes is:%d\n",kb);
    printf("The given bytes in megabytes is:%d\n",mb);
    printf("The given bytes in gigabytes is:%d\n",gb);
}

