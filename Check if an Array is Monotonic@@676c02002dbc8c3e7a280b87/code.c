#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
     int sort=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int increasing = 1, decreasing = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            increasing = 0;  // Not non-decreasing
        }
        if (arr[i] < arr[i + 1]) {
            decreasing = 0;  // Not non-increasing
        }
    }

    if (increasing || decreasing) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}