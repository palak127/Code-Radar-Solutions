// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n);
   int arr[n],i;
   int counteven=0;
   int countodd=0;
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
    printf("%d",arr[i]);
    if(n%2==0)
    {
        counteven++;
    }
    else
    {
        countodd++;
    }

   }
   printf("%d %d",counteven,countodd);
   
   }