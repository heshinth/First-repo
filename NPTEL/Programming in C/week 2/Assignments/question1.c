#include <stdio.h>
int main()
/* IMPORTANT*/
/*NPTEL ASSIGNMEENT SUBMISSION SYSTEM IS SHIT AND DOES NOT WORK PROPERLY
  RETRY AGANIN AND AGAIN*/

{
    int a;
    int count;
    while (!(a == -1))
    {
        scanf("%d", &a);
        if (a == 1)
        {
            count = count + 1;
        }
    }
    if ((count % 2 == 0))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
