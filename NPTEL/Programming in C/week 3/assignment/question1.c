#include <stdio.h>
void main()
{
    int count = 1;
    float prev, curr;

    scanf("%f", &prev);
    while (prev != -1)
    {
        scanf("%f", &curr);
        if (curr != -1 && count)
            printf("%.1f", (prev + curr) / 2);
        if (curr != -1 && !count)
            printf(" %.1f", (prev + curr) / 2);
        count = 0;
        prev = curr;
    }
}