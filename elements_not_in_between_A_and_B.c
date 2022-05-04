#include<stdio.h>
int main()
{
    int d[1000],i,c=0,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&d[i]);
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    c=-1;
    for(i=0;i<n;i++)
    {
        if (d[i]<a || d[i]>b)
        {c=d[i];
        printf("%d ",d[i]);
        }    
    }
    if(c==-1)
    printf("%d",c);
}