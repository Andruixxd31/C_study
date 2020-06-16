#include <stdio.h>

int main()
{
    char *p;
    char text[81];
    puts("insert a chain to convert");
    gets(text);
    //*p points to the first character of the chain
    p = &text[0]; //equivalent to p = text;
    while (*p)
    {
        if ((*p >= 'a') && (*p <= 'z'))
            *p++ = *p - 32;
        else
            p++;
    }
    puts("the modified chain is:");
    puts(text);
}