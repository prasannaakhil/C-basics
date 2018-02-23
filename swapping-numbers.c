#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a value \n");
    scanf("%d",&a);
    printf("enter b value \n");
    scanf("%d",&b);
    printf("numbers before swapping \n a= %d \n b= %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("numbers after swapping \n a=%d \n b=%d \n",a,b);
    return 0;
}
