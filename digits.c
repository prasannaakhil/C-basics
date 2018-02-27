#include<stdio.h>
int main()
{
    int n,c=0;
    printf("enter any number \n");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("number of digits in given number is %d \n",c);
}
