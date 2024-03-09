#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caesar(int key, string text);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // Check if the provided key is a valid number
        bool isValidKey = true;
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                isValidKey = false;
                break;
            }
        }

        if (isValidKey)
        {
            int key = atoi(argv[1]);
            if (key >= 1)
            {
                string plaintext = get_string("plaintext: ");
                caesar(key, plaintext);
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

void caesar(int key, string text)
{
    printf("ciphertext: ");
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];
        if (isalpha(c))
        {
            char offset = 'A';
            if (islower(c))
            {
                offset = 'a';
            }
            c = (c - offset + key) % 26 + offset;
        }
        printf("%c", c);
    }
    printf("\n");
}
