#include<stdio.h>

int prime(int x , int y);
void main()
{
    int x , r;
    printf("Enter an integer\n");
    scanf("%d", &x);

    r = prime(x,x/2);
    if(r==1){
        printf("%d is a prime number\n", x);
    }
    else{
        printf("%d is not a prime number\n", x);
    }
}
int prime(int x, int y)
{
    if(y==1)
       return 1;
    else if(x%y==0)
       return 0;
    else
       return prime(x , y-1);
        
    
}