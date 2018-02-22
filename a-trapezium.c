#include<stdio.h>
int main()
{
    float a,b,h,x;
    printf("enter value of a \n");
    scanf("%f",&a);
    printf("enter value of b \n");
    scanf("%f",&b);
    printf("enter value of h \n");
    scanf("%f",&h);
    x=h*(a+b)/2;
    printf("area of trapezium is %f \n",x);
    return 0;
}
