#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c,a[n],i,j=100,p,b;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d%d",&p,&b);
    if(p>b)
    {
        c=p;
        p=b;
        b=c;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<p||a[i]>b)
        {
            if(j>a[i])
            j=a[i];
        }
    }
    if(j==100)
    printf("-1");
    else
    printf("%d",j);
    return 0;
}
