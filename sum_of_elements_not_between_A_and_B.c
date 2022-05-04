#include<stdio.h>
int main()
{
    int d[100],i,c=0,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&d[i]);
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if (d[i]<a || d[i]>b)
        c+=d[i];
    }
    printf("%d",c);
}