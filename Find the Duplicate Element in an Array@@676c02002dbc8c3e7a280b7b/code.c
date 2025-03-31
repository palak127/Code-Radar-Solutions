#include <stdio.h>
int main()
{
    int i,n,count=2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[n]==arr[i])
        {
            count=2;
            
        }
    }
    printf("%d",arr[n]);
}