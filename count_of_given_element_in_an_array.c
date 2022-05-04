#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,c=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        c++;
    }
    printf("%d",c);
    return 0;
}