#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int check(string key);
string encipher(string key, string text);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        if (!(check(argv[1])))
        {
            string plaintext = get_string("plaintext:");
            printf("ciphertext:");
            encipher(argv[1], plaintext);
        }
        else
        {
            return 1;
        }
    }
    else
    {
        printf("Give only one key or input\n");
        return 1;
    }
}

// To validate the given key
int check(string key)
{
    const int LEN = strlen(key); // Length of the string
    if (LEN == 26)               // Check string length
    {
        for (int i = 0; i < LEN; i++) // To check if the key has only alphabets
        {
            if (!(isalpha(key[i])))
            {
                printf("Key should only contain alphabets!!\n");
                return 1;
            }

            // To chexk if all the characters in a string are unique
            for (int j = i + 1; j < LEN; j++)
            {
                if (key[i] == key[j])
                {
                    printf("All the characters in the key should be unique\n");
                    return 1;
                }
            }
        }
    }
    else // Else if the key has less characters
    {
        printf("Key should contain 26 characters\n");
        return 1;
    }
    return 0;
}

// Function  to encipher the key
string encipher(string key, string text)
{
    const int LEN = strlen(text);
    string cipher = "";

    for (int i = 0; key[i]; i++)
    {
        key[i] = tolower(key[i]);
    }
    for (int i = 0; i < LEN; i++)
    {
        int temp = 0;
        if (isupper(text[i]))
        {
            temp = text[i] - 'A';
            printf("%c", toupper(key[temp]));
        }
        else if (islower(text[i]))
        {
            temp = text[i] - 'a';
            printf("%c", key[temp]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");
    return 0;
}