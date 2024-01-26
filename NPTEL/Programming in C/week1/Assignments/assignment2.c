#include <stdio.h>
int main()
{
    int a, b, c;
    
    // Read the input from the user
    scanf("%d %d %d", &a, &b, &c);
    
    // Declare a variable to store the second largest number
    int second;
    
    // Compare the three integers and assign the second largest to the variable
    if ((a > b && a < c) || (a < b && a > c))
    {
        // If a is between b and c, then a is the second largest
        second = a;
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        // If b is between a and c, then b is the second largest
        second = b;
    }
    else
    {
        // Otherwise, c is the second largest
        second = c;
    }
    
    // Output the second largest number
    printf("%d\n", second);
    
    return 0;
}
//Code stolen from CHATGPT 😜