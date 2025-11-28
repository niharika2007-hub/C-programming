//To print 1 to 5 numbers using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    void printnum(int);
    printnum(i);
}
void printnum(int i)
{
    printf("%d ",i);
    i++;
    if(i>5)
        exit(0);
    printnum(i);
}    
            
