#include <stdio.h>

int main()
{
    int num[10];
    int a = 0, b = 0;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your number\n");
        scanf("%d" , &num[i]);

        if (num[i] % 2 == 0){
            a = a + num[i];
        }
        else{
            b = b + num[i];
        }

    }
    printf("The sum of all even numbers is %d\n", a );
    printf("The sum of all odd numbers is %d\n" , b );

    return 0;

}