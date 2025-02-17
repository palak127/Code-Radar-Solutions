#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {   
        a=a+1;
        printf("%d",a);
    }
    return 0;
}