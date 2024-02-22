#include <cs50.h>
#include <stdio.h>

// initializing functions
int checksum(long no);
int length(long no);
int starting(long no);

int main(void)
{
    // Get input
    long cc;
    do
    {
        cc = get_long("Number: ");
    }
    while (cc < 0);

    if (checksum(cc))
    {
        int len = length(cc);   // calling length function
        int fir = starting(cc); // calling starting function
        if ((len == 15) && ((fir == 34) || (fir == 37)))
        {
            printf("AMEX\n");
        }
        else if ((len == 16) && ((fir >= 51 && fir <= 55)))
        {
            printf("MASTERCARD\n");
        }
        else if ((len == 13 || len == 16) && (fir / 10 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int checksum(long no)
{
    int mod1, mod2, sum1 = 0, sum2 = 0;
    int s1, s2;
    int isSecond = 0; // Flag to determine if the digit is second-to-last

    while (no > 0)
    {
        mod1 = no % 10; // Extract the last digit
        no = no / 10;   // Remove the last digit from the number

        if (isSecond)
        {
            mod2 = mod1 * 2; // Double every other digit
            // Split the digits of the doubled number and sum them
            sum1 += (mod2 % 10) + (mod2 / 10);
        }
        else
        {
            sum2 += mod1; // Sum the digits that weren't multiplied by 2
        }

        isSecond = !isSecond; // Toggle the flag for every digit
    }

    int total = sum1 + sum2; // Sum of both parts

    // Check if the total modulo 10 equals 0
    if (total % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int length(long no) // to get the length of the number
{
    int digits = 0;
    while (no > 0)
    {
        digits++;
        no /= 10;
    }
    return digits;
}

int starting(long no) // to get the first 2 digits of the number
{
    do
    {
        no = no / 10;
    }
    while (no >= 100);
    return no % 100;
}
