#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,r,n,d;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            r=(i*i*i)-i;
        printf("%d",r);
        else
            d=(i*i)-i;
        printf("%d",d);
    }
}
