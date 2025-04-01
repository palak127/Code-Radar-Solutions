#include <stdio.h>

int main() {
    int n,smax=-1;
    scanf("%d", &n);

    int arr[n], i;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    // Traverse the array to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]>smax && arr[i]<max)
        {
            smax=arr[i];
        }
    }
    if(smax==-1)
    {
        printf("%d",smax);
    }
    else
    {
        printf("%d",smax);
    }


    return 0;
}


    