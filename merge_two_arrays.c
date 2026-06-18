#include <stdio.h>

int main() 
{
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    if (n1 < 0 || n1 > 100) {
        printf("Invalid size for first array.\n");
        return 1;
    }

    int arr1[100];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    if (n2 < 0 || n2 > 100) {
        printf("Invalid size for second array.\n");
        return 1;
    }

    int arr2[100];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[200];
    int mergedSize = 0;

    for (int i = 0; i < n1; i++) 
    {
        merged[mergedSize++] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[mergedSize++] = arr2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < mergedSize; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}