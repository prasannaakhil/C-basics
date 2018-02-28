#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter any number to find prime or not \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
    printf("your number %d is a prime number \n",n);
    else
        printf("your number %d is not a prime number \n",n);
}
