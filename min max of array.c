//To print maximum number in array
#include<stdio.h>
void main()
{
    int i,a[5],max;
    printf("enter 5 numbers \n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    max=a[i];
    for(i=1;i<=4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }    
    }
    printf("maximum array element is:%d",max);
} 


//To print minimum number in array
#include<stdio.h>
void main()
{
    int i,a[5],min;
    printf("enter 5 numbers \n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<=4;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }    
    }
    printf("minimum array element is:%d",min);
}   


    
    