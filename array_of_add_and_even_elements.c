#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],o=0,e=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    int ev[e],od[o];
    e=0,o=0;
    for(i=0;i<n;i++)
    {
        // scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            ev[e++]=a[i];
        }
        else
        od[o++]=a[i];
    }
    i=0;
    while(i<o)
    {
        a[i]=od[i];
        i++;
    }int k=0;
    while(i<e+o)
    {
        a[i]=ev[k++];
        i++;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}