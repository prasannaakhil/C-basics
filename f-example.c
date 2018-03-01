#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter any value \n");
    scanf("%d",&k);
    printf("choose any series \n");
    printf("1.1 22 333 \n");
    printf("2.1 12 123 \n");
    scanf("%d",&n);
    if(n==1)
    {
        for(i=1;i<=k;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }
             printf("\n");
        }
       
    }
    else if(n==2)
    {
        for(i=1;i<=k;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
             printf("\n");
        }
       
    }
    
}
