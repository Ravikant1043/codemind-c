#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    for(i=2;i<ceil(pow(n,0.5))+1;i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],k,d=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<=k &&prime(a[i])==1)
        d++;
    }
    printf("%d",d);
    return 0;
}