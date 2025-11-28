//To print numbers in a given limit using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
    int lower,upper;
    void printnum(int,int); 
    printf("enter lower and upper values:");
    scanf("%d%d",&lower,&upper);
    printnum(lower,upper);
}
void printnum(int lower,int upper)
{
    printf("%d ",lower);
    lower++;
    if(lower>upper)
        exit(0);
    printnum(lower,upper);
}    
            
    