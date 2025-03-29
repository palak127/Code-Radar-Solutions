#include<stdio.h>
int main()
{
int n,i;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[n]);
        //printf("%d",arr[n]);
       
    }
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
}