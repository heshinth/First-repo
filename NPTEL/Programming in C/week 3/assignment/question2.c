#include <stdio.h>

int is_prime(int n)
{
    int i, r;
    for (i = n / 2; i > 1; i--)
    {
        r = n % i;
        if (r == 0)
            return 0;
    }
    return 1;
}

int main()
{

    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (is_prime(num))
        {
            printf("%d ", num);
        }
    }

    return 0;
}