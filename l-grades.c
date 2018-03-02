#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter your A subject marks \n");
    scanf("%d",&a);
    printf("enter your B subject marks \n");
    scanf("%d",&b);
    printf("enter your C subject marks \n");
    scanf("%d",&c);
    avg=a+b+c/3;
    if(avg<=35)
        printf("FAIL \n");
    else if(avg<=50)
        printf("PASS \n");
    else if(avg<=60)
        printf("SECOND CLASS \n");
    else if(avg<=70)
        printf("FIRST CLASS \n");
    else
        printf("DISTINCTION \n");
}
