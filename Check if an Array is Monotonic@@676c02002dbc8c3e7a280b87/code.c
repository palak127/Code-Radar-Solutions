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
     for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sort = 0;  // Not sorted
            break;
        }
        // if(arr[i]<arr[i+1])
        // {
        //     sort =0;
        //     break;
        // }
    }
     if (sort == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}