#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}