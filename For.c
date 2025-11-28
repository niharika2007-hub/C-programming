//print 1 to 10 numbers using for loop
//method-1
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<=9;i++){
        printf("%d ",i);
    }
        printf("%d",i);
} 


//method-2
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    i=1;
    for(;i<=9;i++){
        printf("%d ",i);
    }
        printf("%d",i);
}


//method-3
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    i=0;
    for(;i<=9;){
        i++;
        printf("%d ",i);
    }
} 


//method-4
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    i=1;
    for(;;){
        if(i>10)
        {
            break;
        }    
        printf("%d ",i);
        i++;
    }
}


//method-5
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<=9;printf("%d ",i),i++);
        printf("%d ",i);
} 
        