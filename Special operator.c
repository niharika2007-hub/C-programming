//special operator (comma operator)
#include<stdio.h>
void main()
{
    int a=90,b=25,c;
    c=(a,b,a-b);
    printf("c=%d\n",c);
 }  
 
 
 //special operator(sizeof operator)
 #include<stdio.h>
 void main()
 {
     float n;
     printf("%d",sizeof(n));
}     