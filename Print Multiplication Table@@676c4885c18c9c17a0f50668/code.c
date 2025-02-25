#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        b=b*n;
        printf("n x %d = %d",n,i,b);
    }

}