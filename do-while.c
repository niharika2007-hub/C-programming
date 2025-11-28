//To print sum of the digits of a given number using do-while loop
#include<stdio.h>
void main()
{
    int num,sum=0,rem;
    printf("enter a number");
    scanf("%d",&num);
    do
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    while(num!=0);
    printf("sum of digits=%d\n",sum);
}    
       
    