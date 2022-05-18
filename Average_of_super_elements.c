#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], k = 0, i, j, c = 0;
    float t = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
            b[k++] = a[i];
    }
    int m=0;
    for (i = 0; i < k; i++)
    {m=0;
        for (j = 0; j < n; j++)
        {
            if (a[j] == b[i])
            {
                m++;
            }
        }
        if(m==b[i])
        {
            c+=b[i];
            t++;
        }
    }
    if(c!=0)
    printf("%.2f", c / t);
    else
    printf("-1");
    return 0;
}