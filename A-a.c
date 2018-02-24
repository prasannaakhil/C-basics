#include<stdio.h>
int main()
{
    char a;
    printf("enter any alphabet \n");
    scanf("%c",&a);
    if(a<97)
        printf("%c \n",a+32);
    else
        printf("%c \n",a-32);
}
