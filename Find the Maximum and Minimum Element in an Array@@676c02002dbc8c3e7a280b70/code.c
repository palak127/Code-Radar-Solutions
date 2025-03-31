#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n],b,i;
    
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n;i++)
    {

    if (arr[0]<arr[i])
        {
            arr[0]=arr[i];
            
        }
        if (arr[0]<arr[i]);
        {
            arr[0]=arr[i];
        }
        
    }
    printf("%d %d",arr[0],arr[0]);
    return 0;
}