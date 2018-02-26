#include<stdio.h>
int main()
{
    int n,b=0,r;
    printf("enter any number to find highest digit \n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(b<r)
            b=r;
        n=n/10;
    }
    printf("highest digit in your number is %d \n",b);
}
