#include<stdio.h>
int main()
{
    int d;
    printf("enter any number between 1 to 7 \n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:printf("monday \n");
            break;
        case 2:printf("thuesday \n");
            break;
        case 3:printf("wednesday \n");
            break;
        case 4:printf("tursday \n");
            break;
        case 5:printf("friday \n");
            break;
        case 6:printf("saturday \n");
            break;
        case 7:printf("sunday \n");
            break;
        default:printf("invalid option \n");
    }
}
