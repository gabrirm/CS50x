#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    string s = get_string("Plaintext: ");

    printf("ciphertext: ");

    for (int j = 0; j < strlen(s); j++)
    {
        if isupper(s[j])
        {
            printf("%c", (s[j] - 65 + key) % 26 + 65);
        }
        else if islower(s[j])
        {
            printf("%c", (s[j] - 97 + key) % 26 + 97);
        }
        else
        {
            printf("%c", s[j]);
        }

    }
    printf("\n");


}
