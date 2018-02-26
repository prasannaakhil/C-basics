#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter A value \n");
    scanf("%d",&a);
    printf("enter B value \n");
    scanf("%d",&b);
    printf("enter c value \n");
    scanf("%d",&c);
    if(a>b)
    {
       if(a>c)
           printf("A is bigger than B,C \n");
        else
            printf("C is bigger than A,B \n");
    }
    else
    {
        if(b>c)
            printf("B is bigger than A,C \n");
        else
            printf("C is bigger than A,B \n");
    }
}
