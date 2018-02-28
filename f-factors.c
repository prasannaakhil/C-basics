#include<stdio.h>
int main()
{
    int n,i;
    printf("enter any number to find its factors \n");
    scanf("%d",&n);
    printf("factors for given number %d \n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d \t",i);
    }
}
