#include <stdio.h>
int main()
{
    int n;
    int flag=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
        
    }
    int i,k;
    scanf("%d",&k);
    for(int i = 0; i < n; i++) {
    if(arr[i]==k)
        {   flag=i;
            printf("%d",i);
            break;
        }
    

    }
    printf("%d",flag);
}