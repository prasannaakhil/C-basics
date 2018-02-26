#include<stdio.h>
int main()
{
    int r,a;
    printf("enter your seat number \n");
    scanf("%d",&a);
    r=a%8;
    switch(r)
    {
        case 1:
        case 4:printf("your berth is lower berth \n");
            break;
        case 2:
        case 5:printf("your berth is middle berth \n");
            break;
        case 3:
        case 6:printf("your berth is upper berth \n");
            break;
        case 7:printf("your berth is side upper berth \n");
            break;
        default:printf("your berth is side lower berth \n");
           
    }
}
