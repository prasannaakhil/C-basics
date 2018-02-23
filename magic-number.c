#include<stdio.h>
int main()
{
    int m;
    printf("enter any number \n");
    scanf("%d",&m);
    if(m%9==1)
        printf("your number is magic number \n");
    else
        printf("your number is not magic number \n");
    return 0;
}
