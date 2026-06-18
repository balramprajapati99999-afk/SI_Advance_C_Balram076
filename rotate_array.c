#include <stdio.h>

void reverse(int a[], int l, int r) {
    while (l < r) {
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
}

int main() 
{
    int n, k;

    scanf("%d %d", &n, &k);

  int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n <= 0) return 0;

    k = k % n;

    if (k > 0) {
        reverse(a, 0, n - 1);
        reverse(a, 0, k - 1);
        reverse(a, k, n - 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}