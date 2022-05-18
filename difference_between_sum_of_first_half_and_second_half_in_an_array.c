#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b=0, i,j=0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n/2+1;i++)
    {
        if(i<n/2)
        b+=a[i];
        // j+=a[n/2+i];
    }
    for(i=n/2;i<n;i++)
    j+=a[i];
    printf("%d",abs(b-j));
    return 0;
}