#include <stdio.h>

int main()
{
    int r , c , rows ;
    printf("Enter the number of rows for hollow square \n");
    scanf("%d", &rows);

    for ( r = 1 ; r <= rows ; r++)
    {
        if(r==1 || r==rows)
        {
            for ( c = 1 ; c <= rows ; c++)
            {
                printf("*");
            }
            
        }
        else{

            for ( c = 1 ; c <= rows ; c++)
            {
                if(c==1 || c==rows)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            
        }
        printf("\n");
    } 
    printf("\n");

    return 0;
    
}