#include<stdio.h>
int main()
{
    int a[5][3], transpose[3][5], i, j;
    
    printf("Enter elements of 5x3 matrix:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Calculate transpose
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    
    printf("\nOriginal Matrix (5x3):\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose Matrix (3x5):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}