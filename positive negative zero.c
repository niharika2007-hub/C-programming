//selection statement for positive,negative,zero (if-else-if)
#include<stdio.h>
void main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0)
    printf("given number is positive number");
    else if(num<0)
    printf("given number is negative number");
    else
    printf("given number is zero");
}    