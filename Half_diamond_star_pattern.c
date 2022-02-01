#include <stdio.h>
void pattern(int x)
{
    int j;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < i; j++)
            {printf("*");}
            
       {printf("
");}
    }
}
void reverse(int y)
{
    for (int i = y; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        if(i!=0)
        printf("
");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    if(a<3)
    {
      printf("The pattern is not possible");
      return 0;
    }
    pattern(a);
    reverse(a - 1);
    return 0;
}
