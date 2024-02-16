#include <stdio.h>
int main()
{
    int bit, count = 0, flag = 0, sum = 0;
    scanf("%d", &bit);
    while (bit != -1)
    {
        if (bit == 1)
        {
            flag = 1;
            count += sum;
            sum = 0;
            scanf("%d", &bit);
        }
        if (flag)
            if (bit == 0)
                sum++;
        scanf("%d", &bit);
    }
    printf("%d", count);
    return 0;
}