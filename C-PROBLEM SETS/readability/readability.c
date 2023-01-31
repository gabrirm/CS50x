#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letter(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    int number_letters = count_letter(text);
    int number_words = count_words(text);
    int number_sentences = count_sentences(text);
    float l = (number_letters / (float) number_words) * 100;
    float s = (number_sentences / (float) number_words) * 100;
    int index = round(0.0588 * l - 0.296 * s - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");

    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letter(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            count += 1;
        }
    }
    return count;
}
int count_words(string text)
{
    int count = 1;
    for (int j = 0; j < strlen(text); j++)
    {
        if (text[j] == 32)
        {
            count += 1;
        }
    }
    return count;
}
int count_sentences(string text)
{
    int count = 0;
    for (int j = 0; j < strlen(text); j++)
    {
        if (text[j] == 33 || text[j] == 63 || text[j] == 46)
        {
            count += 1;
        }
    }
    return count;
}