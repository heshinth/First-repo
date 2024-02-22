#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting input from the user
    int cent;
    do
    {
        cent = get_int("Change owed: ");
    }
    while (cent < 0);

    // Calculating the number of quaters
    int quarters = 0;
    if (cent >= 25)
    {
        quarters = cent / 25;
        cent = cent % 25;
    }

    // calculating the number of dimes
    int dimes = 0;
    if (cent >= 10)
    {
        dimes = cent / 10;
        cent = cent % 10;
    }

    // nickels
    int nickles = 0;
    if (cent >= 5)
    {
        nickles = cent / 5;
        cent = cent % 5;
    }

    // penny
    int penny = 0;
    if (cent >= 1)
    {
        penny = cent;
    }

    int coins = 0;
    coins = quarters + dimes + nickles + penny;
    printf("%i\n", coins);
}
