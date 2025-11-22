//selection statement biggest number among three numbers (if-else-if)
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a is biggest number");
    else if(b>a&&b>c)
    printf("b is biggest number");
    else
    printf("c is biggest number");
} 
     


//selection statement to find the spelling of a number(if-else-if)
#include<stdio.h>
void main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    if(i==1)
    printf("One");
    else if(i==2)
    printf("Two");
    else if(i==3)
    printf("Three");
    else if(i==4)
    printf("Four");
    else if(i==5)
    printf("Five");
    else
    printf("Numbers out of limit");
}  



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