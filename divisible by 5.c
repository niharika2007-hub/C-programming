//To print numbers divisible by 5
#include<stdio.h>
void main()
{
    int i,a[5];
    printf("enter 5 numbers \n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    printf("divisible by 5:\n");
    for(i=0;i<=4;i++)
    {
        if(a[i]%5==0)
        {
            printf("%d ",a[i]);
        }  
    }    
}   
    