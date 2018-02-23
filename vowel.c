#include<stdio.h>
int main()
{
    char a;
    printf("enter any character \n");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        printf("your character is vowel \n");
    else
        printf("your character is consonant \n");
    return 0;
}
