#include<stdio.h>
int main()
{
    int a,b=9,r;
    printf("enter any number \n");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        if(b>r)
            b=r;
        a=a/10;
    }
    printf("least digit in your number is %d \n",b);
}
