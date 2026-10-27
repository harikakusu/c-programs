#include <stdio.h>

int main()
{
    char s[500];
    int i, lines = 1, words = 0, chars = 0;

    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        chars++;

        if(s[i] == '\n')
            lines++;

        if(s[i] == ' ' || s[i] == '\n')
            words++;
    }

    if(chars > 0 && s[chars - 1] != '\n')
        words++;

    printf("Number of lines = %d\n", lines);
    printf("Number of words = %d\n", words);
    printf("Number of characters = %d\n", chars);

    return 0;
}