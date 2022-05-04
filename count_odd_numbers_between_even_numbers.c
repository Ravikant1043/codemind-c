#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,o,c=0,p;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        break;
    }
    o=i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        break;
    }
    p=i;
    for(i=o+1;i<p;i++)
    {
        if(a[i]%2!=0)
        c++;
    }
    printf("%d",c);
}