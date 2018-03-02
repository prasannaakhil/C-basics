#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("a values \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("b values \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%2d ",a[i]);
    }
    
    printf("\n\n\n\n");
    
    for(i=0;i<5;i++)
    {
        printf("%2d ",b[i]);
    }
}

