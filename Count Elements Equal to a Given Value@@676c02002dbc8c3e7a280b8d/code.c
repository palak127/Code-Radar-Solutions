#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==k)
        {
            count++;
        }
    }
    printf("%d",count);
}