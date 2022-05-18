#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b, c, d, i,j;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d%d", &b, &c);
    if(b>c)
    {
        j=b;
        b=c;
        c=j;
    }
    int k=0;
    d=b;
    for (i = 0; i < n; i++)
    {
        if (b <= a[i] && a[i]<= c)
        {
            if(d<a[i])
            d=a[i];
            k=1;
        }
        
    }
    if(k==0)
    printf("-1");
    else
    printf("%d", d);
    return 0;
}