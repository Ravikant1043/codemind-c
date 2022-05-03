#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b;
    float c=0;
    for (i=0;i<n;i++)
    {scanf("%d",&a[i]);
    c+=a[i];}
    c=c/n;
    printf("%.2f",c);
    return 0;
}