#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int sentence(string text);
int words(string text);
int letters(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    float wordno = words(text);
    float sentno = sentence(text);
    float lettno = letters(text);

    // Calculate the average letters and sentences per 100 words
    float l = (lettno / wordno) * 100.0;
    float s = (sentno / wordno) * 100.0;

    // Compute the Coleman-Liau index
    float index = 0.0588 * l - 0.296 * s - 15.8;
    int grade = round(index);

    // Print the grade level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int sentence(string text)
{
    int number = 0;
    for (int i = 0, len = strlen(text); i <= len; i++)
    {
        if ((text[i] == '.') || (text[i] == '!') || (text[i] == '?'))
        {
            number++;
        }
    }
    return number;
}

int words(string text)
{
    int number = 0;
    for (int i = 0, len = strlen(text); i <= len; i++)
    {
        if (text[i] == ' ')
        {
            number++;
        }
    }
    return number + 1;
}

int letters(string text)
{
    int number = 0;
    for (int i = 0, len = strlen(text); i <= len; i++)
    {
        if (isalpha(text[i]))
        {
            number++;
        }
    }
    return number;
}
