#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c,b,m=-1,i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(a[i]<b || a[i]>c)
        {
            if(m<a[i])
            m=a[i];
        }
    }
    if(m==-1)
    printf("%d",m);
    else
    printf("%d",m);
}