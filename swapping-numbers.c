#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a value \n");
    scanf("%d",&a);
    printf("enter b value \n");
    scanf("%d",&b);
    printf("numbers before swapping a= %d , b= %d \n",a,b);
    c=a;
    b=c;
    a=b;
    printf("numbers after swapping %d%d \n",a,b);
    return 0;
}
