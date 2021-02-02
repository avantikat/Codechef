#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    if (t <= 20)
    {
        while (t--)
        {
            float n;
            int sqrt1;
            scanf("%f", &n);
            if (n <= 10000)
            {
                sqrt1 = sqrt(n);
                printf("%d\n", sqrt1);
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}

