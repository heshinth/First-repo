#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get valid input
    int num;
    do
    {
        num = get_int("Number: ");
    }
    while (!(num >= 1 && num <= 8));

    // for loop for each line
    for (int i = 1; i <= num; i++)
    {
        for (int space = i; space < num; space++)
        {
            printf(" ");
        }

        for (int star = 1; star <= i; star++)
        {

            printf("#");
        }

        printf("  ");

        for (int star = 1; star <= i; star++)
        {

            printf("#");
        }

        printf("\n");
    }
}
