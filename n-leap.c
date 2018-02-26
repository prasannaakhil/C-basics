#include<stdio.h>
int main()
{
    int a;
    printf("enter any year \n");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
            printf("your year is a leap year \n");
        else
            printf("your year is not a leap year \n");
    }
    else
    {
        if (a%4==0)
            printf("your year is a leap year \n");
        else
            printf("your year is not leap year \n");
    }
}
