#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b=0, i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        break;
        else
        b+=a[i];
    }
    printf("%d",b);
    return 0;
}