#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    // Get text from user
    string text = get_string("Text: ");

    int text_len = strlen(text);
    int words = 1;
    int sentences = 0;
    int letters = 0;

    for (int i = 0; i < text_len; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
        if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentences++;
        }
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }

    float l = ((float) letters / (float) words) * 100;
    float s = ((float) sentences / (float) words) * 100;

    int coleman_index  = round(0.0588 * l - 0.296 * s -15.8);

    if (coleman_index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (coleman_index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
    printf("Grade %i\n", coleman_index);
    }
}
