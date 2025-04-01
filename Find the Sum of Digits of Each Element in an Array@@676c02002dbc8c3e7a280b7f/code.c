#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        while (arr[i]!=0)
        {
            a=arr[i]%10;
            sum=sum+a;
        }
        printf("%d",sum);
    }
   
}
