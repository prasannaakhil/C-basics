#include<stdio.h>
int main()
{
    int a,b,x,m,r,l;
    printf("select a option from below menu \n");
    printf("1.buzz number \n");
    printf("2.leap year \n");
    printf("3.magic number \n");
    printf("4.automofic number \n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("enter any number \n");
        scanf("%d",&b);
        if(b%7==0 && b%10==7)
            printf("your number is buzz number \n");
        else
            printf("your number is not a buzz number \n");
    }
    else if (x==2)
    {
        printf("enter any year \n");
        scanf("%d",&l);
        if(l%100==0)
        {
            if(l%400==0)
                printf("its a leap year \n");
            else
                printf("its not a leap year \n");
        }
        else
            if(l%4==0)
                printf("its a leap year \n");
            else
                printf("its not a leap year \n");
    }
    else if(x==3)
    {
        printf("enter any number \n");
        scanf("%d",&m);
        if(m%9==1)
            printf("your number is magic number \n");
        else
            printf("your number is not magic number \n");
    }
    else if(x==4)
    {
        printf("enter any number \n ");
        scanf("%d",&a);
        r=a*a;
        if(r%10==a || r%100==a || r%100==a)
            printf("your number is automorphic \n ");
        else
            printf("your number is not automorphic \n ");
    }
    else
        printf("you have choosen wrong option --TRY AGAIN-- \n");
}
