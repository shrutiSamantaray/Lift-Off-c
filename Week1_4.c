#include<stdio.h>

int main()
{
    int a , b , operation ;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a , &b);

    printf("Press 1 for additon\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for divison\n");
    printf("Press 5 for modulus\n");

    printf("Enter the operation you want to perform : \n");
    scanf("%d" , &operation );


    switch(operation)
    {
        case 1 :
           printf(" Addition  : %d + %d = %d\n" , a , b , a + b);
           break;
        case 2 :
           printf(" Subtraction  : %d - %d = %d\n" , a , b , a - b);
           break;
        case 3 :
           printf(" Multiplication  : %d * %d = %d\n" , a , b , a * b);
           break;
        case 4 :
           printf(" Division  : %d / %d = %d\n" , a , b , a / b);
           break;
        case 5 :
           printf(" Modulus : %d %% %d = %d\n" , a , b , a%b );
           break;   
        default :
           printf("Incorrect input\n");
           break;

    }
    

    return 0 ;

}