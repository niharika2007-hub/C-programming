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
     

 
    