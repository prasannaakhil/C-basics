#include<stdio.h>
int main()
{
    int n,f=1,k;
    printf("enter any number to find its factorial \n");
    scanf("%d",&n);
    k=n;
    do{
        f=f*n;
        n--;
    }while(n>0);
    printf("factorial for given number %d is %d \n",k,f);
}
