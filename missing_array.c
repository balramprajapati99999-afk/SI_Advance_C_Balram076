#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n-1];

    int xor1 = 0, xor2 = 0;

    // XOR of 1 to n
    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    // XOR of array elements
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        xor2 ^= arr[i];
    }

    // missing number
    int missing = xor1 ^ xor2;

    printf("%d\n", missing);

    return 0;
}