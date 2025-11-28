//while loop printing numbers 1 to 10
#include<stdio.h>
void main()
{
    int i;
    i=1;
    while(i<=9)
    {
    printf("%d ",i);
    i=i+1;
    }
    printf("%d",i);
}  



//printing numbers 10 to 1 using while loop 
#include<stdio.h>
void main()
{
    int i=10;
    while(i>=2)
    {
    printf("%d ",i);
    i--;
    }
    printf("%d",i);
} 


//printing numbers 1-n using while loop 
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter n value");
    scanf("%d",&n);
    i=1;
    while(i<=(n-1))
    {
    printf("%d ",i);
    i++;
    }
    printf("%d",i);
}  



//To print even numbers in a while loop
#include<stdio.h>
void main()
{
    int i,j;
    printf(" enter i,j values\n");
    scanf("%d%d",&i,&j);
    if(i<=j)
    {
        while(i<j)
        {
            if(i%2==0){
            printf("%d ",i);}
            i++;
        }
            printf("%d",i);
    }
    else
        printf("Invalid inputs");
 } 