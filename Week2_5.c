#include <stdio.h>

int main()
{
    int arr[2][2], arr1[2][2], i, j, arr2[2][2], arr3[2][2];
    printf("Input the values of 2X2 matrice : \n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            printf("a%d%d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            printf("b%d%d : ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    printf("The sum of matrices\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            arr2[i][j] = arr[i][j] + arr1[i][j];
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }
    arr3[0][0] = arr[0][0] * arr1[0][0] + arr[0][1] * arr1[1][0];
    arr3[0][1] = arr[0][0] * arr1[0][1] + arr[0][1] * arr1[1][1];
    arr3[1][0] = arr[1][0] * arr1[0][0] + arr[1][1] * arr1[1][0];
    arr3[1][1] = arr[1][0] * arr1[0][1] + arr[1][1] * arr1[1][1];
    printf("The product of matrices\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d  ", arr3[i][j]);
        printf("\n");
    }
    return 0;
}
