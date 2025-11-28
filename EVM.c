//EVM
#include<stdio.h>
#include<conio.h>
void main()
{
    int nv,a=0,b=0,c=0,iv=0,ch;
    char name[20];
    printf("enter pooling booth officer name:");
    scanf("%s",name);
    printf("enter number of votes:");
    scanf("%d",&nv);
    printf("each party initial votes:");
    printf("\n A=%d B=%d C=%d",a,b,c);
    getch();
    clrscr();
    while(nv>0)
    {
    printf("\n 1.A 2.B 3.C");
    printf(" enter your vote:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                a++;
                nv--;
                break;
        case 2:
                b++;
                nv--;
                break;
        case 3:
                c++;
                nv--;
                break;
        default:
                iv++;
                nv--;
    }
    clrscr();
    }
    printf("\n*****************\n");
    printf("\n A=%d B=%d C=%d",a,b,c);
    printf("\n Invalid votes:%d",iv);
    printf("\n*****************\n");
}    