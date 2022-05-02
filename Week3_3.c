#include<stdio.h>

int num(int );
void main()
{
    int a , r ;
    printf("Enter an integer to check even or odd\n");
    scanf("%d", &a);
    r=num(a);
}
int num(int a)
{
    if(a%2==0)
      printf("%d is an even number\n", a);
    else
      printf("%d is an odd number\n" ,a);
    return 0;
}