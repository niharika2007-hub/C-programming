//addition by using function
//method-1
#include<stdio.h>
void main()
{
    void add();
    printf("hello");
    printf("\n welcome to pace");
    add();
    printf("\n end of the program");
}
void add()
{
    int a,b;
    printf("\n enter a and b values:\n");
    scanf("%d%d",&a,&b);
    printf("%d",(a+b));
}

    
//method-2
#include<stdio.h>
void main()
{
    int a,b;
    void add(int,int);
    printf("\n hello");
    printf("\n welcome to pace");
    a=50,b=20;
    add(a,b);
    printf("\n end of the program");
}
void add(int a,int b)
{
    printf(" %d",(a+b));
}

//method-3
#include<stdio.h>
void main()
{
    int a,b,result;
    int add(int,int);
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    result=add(a,b);
    printf("%d",result);
    printf("\n end of the program");
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}


        

    