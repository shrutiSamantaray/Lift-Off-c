#include<stdio.h>

int main()
{
    int a , b;
    printf("Enter the number a\n");
    scanf("%d", &a);

    printf("Enter the number b\n");
    scanf("%d", &b);

    if(a>b){
        printf(" a is greater than b\n");
    }
    else{
        printf(" b is greater than a\n");
    }

    return 0 ;

}