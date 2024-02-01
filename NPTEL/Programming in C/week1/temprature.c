#include <stdio.h>
float main()
{
    float c; /*celcius in float*/
    float f; /*farenheit in float*/
    c = 55;
    f = ((9 * c) / 5 + 32);
    printf("The temprature");
    printf(" in celcius: %f \n", c);
    printf("After converting  to farenheit: %f", f);
}