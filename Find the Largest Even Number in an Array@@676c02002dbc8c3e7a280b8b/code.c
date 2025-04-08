#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max;
    int found = 0; // Flag to track if any even number is found

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (!found) // First even number found
            {
                max = arr[i];
                found = 1;
            }
            else if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }

    if (found)
        printf("%d", max);
    else
        printf("-1");

    return 0;
}
