#include<stdio.h>
int main()
{
    int a,r;
    printf("enter any number \n ");
    scanf("%d",&a);
    r=a*a;
    if(r%10==a || r%100==a || r%100==a)
        printf("your number is automorphic \n ");
    else
        printf("your number is not automorphic \n ");
    return 0;
}
