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
            int a=arr[i]%10;
            sum=sum+a;
            i++;
        }
        printf(" %d",sum);
    }
   
}
