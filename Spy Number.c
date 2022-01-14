#include<stdio.h>
int main()
{
    int n,s=0,m=1,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    while(t!=0)
    {
        m*=t%10;
        t/=10;
    }
    if(m==s)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}