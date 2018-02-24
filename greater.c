#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter A value \n");
    scanf("%d",&a);
    printf("enter B value \n");
    scanf("%d",&b);
    printf("enter C value \n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
            printf("a is bigger (a value is %d) \n",a);
        else
            printf("c is bigger (c value is %d) \n",c);
    }
    else
    {
        if(b>c)
            printf("b is greater (b value is %d) \n",b);
        else
            printf(" c is bigger (c value is %d) \n ",c);
            
    }
        
        
    
}
