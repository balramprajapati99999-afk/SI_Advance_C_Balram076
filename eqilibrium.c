#include <stdio.h>

int equilibriumIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            return i;
        }

        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = equilibriumIndex(arr, n);

    if (index != -1)
        printf("Equilibrium Index = %d\n", index);
    else
        printf("No Equilibrium Index found.\n");

    return 0;
}