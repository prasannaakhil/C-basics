#include<stdio.h>
int main()
{
    int i=1;
    do{
        printf("*");
        if(i%3==0)
            printf("\n");
        i++;
        
    }while(i<=9);
  
}

