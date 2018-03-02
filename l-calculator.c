#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter any valid character \n");
    scanf("%c",&ch);
    printf("enter A value \n");
    scanf("%d",&a);
    printf("enter B value \n");
    scanf("%d",&b);
    if(ch=='+')
        printf("addition of given values is %d \n",a+b);
    else if(ch=='-')
        printf("substration of given values is %d \n",a-b);
    else if(ch=='*')
        printf("multiplication of given values is %d \n",a*b);
    else if(ch=='%')
        printf("reminder of given values is %d \n",a%b);
    else if(ch=='/')
        printf("quotient of given value is %d \n",a/b);
    else
        printf("you have entered invalid operator \n");
}
