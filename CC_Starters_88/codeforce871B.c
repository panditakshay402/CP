#include <stdio.h>

int main()
{
    int t, n, i, m, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {    
            scanf("%d", &a[i]);     
        }
        m = 0;
        c = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                c++;
            }
            else
            {
                if (c > m)
                {
                    m = c;
                }
                c = 0;
            }
        }
        if (c > m)
        {
            m = c;
        }
        printf("%d\n", m);
    }
}