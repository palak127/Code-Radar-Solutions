#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
     int max=arr[0];
    for(int i=0;i<n;i++)
    {   
        if(max%2==0 && max<arr[0])
        {
            max=arr[0];
        }
        else
        {    int x=-1;
            printf("%d",x);
        }
    }
    printf("%d",max);

}