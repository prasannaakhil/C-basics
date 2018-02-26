#include<stdio.h>
int main()
{
    int m;
    printf("enter any number \n");
    scanf("%d",&m);
    while(m>0)
    {
        printf("%d \t",m);
        m--;
    }
    printf(" \n this is the list of numbers \n");
    return 0;
}

