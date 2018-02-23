#include<stdio.h>
int main()
{
    int b;
    printf("enter any number");
    scanf("%d",&b);
    if(b%7==0 && b%10==7)
        printf("your number is buzz number");
    else
        printf("your number is not a buzz number");
    return 0;
}
