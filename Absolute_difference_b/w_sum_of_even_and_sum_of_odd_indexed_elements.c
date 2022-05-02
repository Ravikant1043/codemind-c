#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,o;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (i%2!=0)
        c+=a[i];
        else
        o+=a[i];
    }
    printf("%d",abs(c-o));
    return 0;
}