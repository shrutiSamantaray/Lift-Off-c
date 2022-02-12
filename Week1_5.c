#include<stdio.h>
#define PI 3.14

int main()
{
    float r , d , c ,a ;
    printf("Enter the radius of the circle\n");
    scanf("%f", &r);

    d = 2 * r ;
    c = 2 * PI * r;
    a = PI * r * r ; 

    printf("The diameter of the circle is %f \n" , d );
    printf("The circumference of the circle is %f\n" , c );
    printf("The area of the circle is %f\n" , a );

    

    return 0 ;

}