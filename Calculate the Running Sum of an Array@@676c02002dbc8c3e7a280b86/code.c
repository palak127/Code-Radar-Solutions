#include <stdio.h>
int main()
{
    int n,b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        b=b+arr[i];
        printf(" %d",b);
    }

}