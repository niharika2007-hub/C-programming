//Logical operator
#include<stdio.h>
void main()
{
    int a=100,b=200;
    printf("%d\n",((a>b)&&(a<b)));
    printf("%d\n",((a>b)||(a<b)));
    printf("%d\n",!((a>b)||(a<b)));
 }   