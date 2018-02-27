#include<stdio.h>
int main()
{
    int r,s=0,n;
    printf("enter any number \n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("the sum of digits in given number is %d \n",s);
}
