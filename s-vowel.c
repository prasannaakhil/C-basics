#include<stdio.h>
int main()
{
    char a;
    printf("enter any alphabet \n");
    scanf("%c",&a);
    switch(a)
    {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':printf("your alphabet is vowel \n");
            break;
        default:printf("your alphabet is consonant \n");
    }
}
