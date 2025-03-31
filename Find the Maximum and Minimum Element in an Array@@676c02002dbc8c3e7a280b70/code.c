#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], i;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print results
    printf("Max: %d\nMin: %d\n", max, min);

    return 0;
}
