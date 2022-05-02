#include<stdio.h>

int swap(int x , int y);
void main()
{
    int a , b , r ;
    printf("Enter two integers\n");
    scanf("%d %d", &a , &b);
    printf("Before swapping : a =%d\t b=%d \n", a , b);
    r = swap(a , b);
}
int swap(int a , int b)
{
    int d ;
    d=a;
    a=b;
    b=d;
    printf("After swapping: a =%d \t b=%d \n", a , b);
    return 0;
}