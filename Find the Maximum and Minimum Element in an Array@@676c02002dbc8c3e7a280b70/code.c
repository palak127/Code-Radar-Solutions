#include <stdio.h>

int main() {
    int n;
    int arr[n],b,i,max=arr[0],min=arr[0];
    scanf("%d",&n);
    printf("%d",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (max<arr[i])
        {
            max=arr[i];
            
        }
        if (min>arr[i]);
        {
            min=arr[i];
        }
        
    }
    printf("%d%d",min,max);
    return 0;
}