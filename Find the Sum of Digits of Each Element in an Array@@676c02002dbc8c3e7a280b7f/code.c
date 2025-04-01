#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int num=abs(arr[i]),sum=0;
        while (num!=0)
        {
            
            sum=sum+num%10;
            num/=10;
            
            
        }
        printf("%d ",sum);
        
    }
   
}
