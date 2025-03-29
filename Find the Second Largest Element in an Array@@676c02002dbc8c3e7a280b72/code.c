// Your code here...
#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    int arr[n],i;
    int max=arr[0];
    int smax=arr[0];
    for (i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
        if (max<arr[i])
        {
            max=arr[i];
        }
        if(smax<arr[i])
        {
            smax=arr[0];
        }
    }
    printf("%d",smax);
}


    