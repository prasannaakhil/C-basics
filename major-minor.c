#include<stdio.h>
int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d",&age);
    if(age>=18)
        printf("you are major \n");
    else
        printf("you are minor \n");
    return 0;
}
