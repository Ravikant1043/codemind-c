#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b, c, d=0, i,j,k=0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d%d", &b, &c);
    if(b>c)
    {
        j=b;
        b=c;
        c=j;
    }
    for (i = 0; i < n; i++)
    {
        if (b <= a[i] && a[i]<= c)
        {
            printf("%d ",a[i]);
            k=-1;
        }
        
    }
    if(k==0)
    printf("-1");
    return 0;
}