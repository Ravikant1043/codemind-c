#include<stdio.h>
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}