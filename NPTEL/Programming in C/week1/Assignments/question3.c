#include <stdio.h>
int main()
{
    // Declare variables to store the coefficients of the equations
    int a1, b1, c1, a2, b2, c2;

    // Read the input from the user
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    // Declare variables to store the solutions to x and y
    int x, y;

    // Calculate the determinant of the coefficient matrix
    int det = a1 * b2 - a2 * b1;

    // Check if the determinant is zero
    if (det == 0)
    {
        // If the determinant is zero, then the equations are either inconsistent or dependent
        printf("No unique solution\n");
    }
    else
    {
        // If the determinant is non-zero, then the equations are consistent and independent
        // Use Cramer's rule to find the solutions to x and y
        x = (c1 * b2 - c2 * b1) / det;
        y = (a1 * c2 - a2 * c1) / det;

        // Output the solutions to x and y
        printf("%d %d\n", x, y);
    }

    return 0;
}
// Code stolen from CHATGPT 😜