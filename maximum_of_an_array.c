#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    int c=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]>c)
        c=a[i];
    }
    printf("%d",c);
    return 0;
}