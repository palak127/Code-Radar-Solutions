#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find frequencies
    int visited[n]; // To track counted elements
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }


    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue; // Skip counted elements

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
