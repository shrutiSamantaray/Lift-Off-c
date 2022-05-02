#include<stdio.h>

int largest(int m[] , int n);
void main()
{
    int a[3], i ;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter element \n");
        scanf("%d", &a[i]);
    }
    printf("Largest number of the array is %d", largest(a , 3));
    
}
int largest(int m[] , int n)
{
    int largest=0;
    for (int i = 0; i < n; i++)
    {
        if(m[i]>largest)
           largest=m[i];
    }
    return largest;
    
}