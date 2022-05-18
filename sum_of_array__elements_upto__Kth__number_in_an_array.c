#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b=0, i,k;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        break;
        else
        b+=a[i];
    }
    printf("%d",b+k);
    return 0;
}