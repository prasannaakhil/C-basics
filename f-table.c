#include<stdio.h>
int main()
{
    int a,i;
    printf("enter any number to get its table \n");
    scanf("%d",&a);
    printf("table for given number %d is given below \n",a);
    for(i=0;i<=20;i++)
    {
        printf("%d * %d = %d \n",a,i,a*i);
    }
}
