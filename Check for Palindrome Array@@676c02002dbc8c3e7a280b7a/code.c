#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n], brr[n];

    // Read input into arr[]
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // ✅ Corrected array input
    }

    // Create reversed array brr[]
    for (i = 0; i < n; i++) {
        brr[i] = arr[n - 1 - i];  // ✅ Store reversed values in brr[]
    }

    // Check if arr[] and brr[] are the same (palindrome check)
    int isPalindrome = 1;  // Assume it's a palindrome
    for (i = 0; i < n; i++) {
        if (arr[i] != brr[i]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        printf("YES\n");  // ✅ Palindrome
    } else {
        printf("NO\n");   // ❌ Not a palindrome
    }

    return 0;
}
