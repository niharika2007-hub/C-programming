//Factorial of a given number using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,result;
    int fact(int);
    printf("enter a number:");
    scanf("%d",&n);
    result=fact(n);
    printf("the factorial is:%d",result);
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return(n*fact(n-1));
}        





    