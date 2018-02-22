#include<stdio.h>
int main()
{
    float si,p,n,r;
    printf("enter principal amount \n");
    scanf("%f",&p);
    printf("enter number of years \n");
    scanf("%f",&n);
    printf("enter rate per annum \n");
    scanf("%f",&r);
    si=(p*n*r)/100;
    printf("simple interest is %f \n",si);
    return 0;
}
