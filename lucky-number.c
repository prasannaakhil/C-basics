#include<stdio.h>
int main()
{
    int l,r;
    printf("enter any number \n ");
    scanf("%d",&l);
    r=l%9;
    if(r==0)
        printf("your lucky number is 9 \n");
    else
        printf("your lucky number is %d \n",r);
    return 0;
}
