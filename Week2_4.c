#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int a = 0, b = 1;
    int sum;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
        
    }
    return 0;
}
