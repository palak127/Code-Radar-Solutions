#include<stdio.h>
int main()
{
    int n,i,b=1;
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        b=n*i;
        printf("%d x %d = %d\n",n,i,b);
    }

}