#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("enter any number to find its fabonacci series \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%2d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
}
