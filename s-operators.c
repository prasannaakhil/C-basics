#include<stdio.h>
int main()
{
    char x;
    int a,b,c;
    printf("enter any valid operator \n");
    scanf("%c",&x);
    printf("enter A value \n");
    scanf("%d",&a);
    printf("enter B value \n");
    scanf("%d",&b);
    switch(x)
    {
    case'+':printf("you have selected addition a=%d \t b=%d \t c=%d \n",a,b,a+b);
        break;
    case '-':printf("you have selected addition a=%d \t b=%d \t c=%d \n",a,b,a-b);
        break;
    case '%':printf("you have selected addition a=%d \t b=%d \t c=%d \n",a,b,a%b);
        break;
    case '/':printf("you have selected addition a=%d \t b=%d \t c=%d \n",a,b,a/b);
        break;
    case '*':printf("you have selected addition a=%d \t b=%d \t c=%d \n",a,b,a*b);
        break;
    default:printf("you have choosen wrong option --TRY AGAIN-- \n");
    }
}
