#include<stdio.h>

int gcd(int a , int b);
void main()
{
    int a , b , r ;
    printf("Enter two integers\n");
    scanf("%d %d", &a , &b);

    r = gcd(a ,b);
    printf("GCD of %d and %d is %d", a , b, r);
    
}
int gcd(int a , int b)
{
    int r ;
    if(a>b)
       r=gcd(a-b, b) ;
    else if(b>a)
       r=gcd(a,b-a) ;
    else
      return b ;
}