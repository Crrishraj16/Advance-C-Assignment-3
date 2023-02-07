// WAP to take input from the user and check if character is vowel or consonant and value is digit using function and pointers.

#include <stdio.h>
#include <ctype.h>

int isVowel(char *c)
{
    if (*c == 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u' ||
        *c == 'A' || *c == 'E' || *c == 'I' || *c == 'O' || *c == 'U')
        return 1;
    return 0;
}

int isDigit(char *c)
{
    return isdigit(*c);
}

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (isVowel(&c))
        printf("%c is a vowel\n", c);
    else if (isDigit(&c))
        printf("%c is a digit\n", c);
    else
        printf("%c is a consonant\n", c);
    return 0;
}
