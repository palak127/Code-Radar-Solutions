#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n);
    int arr[n],b,i;
    
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int max=arr[0],min=arr[0];
    for(i=1;i<n;i++)
    {

    
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