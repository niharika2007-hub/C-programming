//selection statement to print vowel(switch)
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Alphabet");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    printf("given alphabet is an vowel");
    break;
    default:
    printf("given alphabet is consonant");
    }
}    