#include<stdio.h>
int main()
{
    int r,n;
    printf("enter your seat number \n");
    scanf("%d",&n);
    r=n%8;
    if(r==1 || r==4)
        printf("your berth is lower berth \n");
    else if(r==2 || r==5)
        printf("your berth is middle berth \n");
    else if(r==3 || r==6)
        printf("your berth is upper berth \n");
    else if(r==7)
        printf("your berth is side lower berth \n");
    else
        printf("your berth is side upper berth \n");
}
