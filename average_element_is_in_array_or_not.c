#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,c=0;
    for (i=0;i<n;i++)
    {scanf("%d",&a[i]);
    c+=a[i];}
    c=c/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==c)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}