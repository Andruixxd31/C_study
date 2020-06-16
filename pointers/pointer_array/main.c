#include <stdio.h>

int lenght(const char *);

int main()
{
    static char cad[] = "Hello World!";
    printf("The lenght of %s is %d characters\n", cad, lenght(cad));
}

int lenght(const char *cad)
{
    int count = 0;
    while (*cad++) //counts the number of indexes in the array.
        count++;
    return count;
}
