//getchar reads character by character, getchar returns th next character of the stdin. In case of an error or finding the end of a file, it returns EOF

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int car;
    int cuenta = 0;
    while ((car = getchar()) != EOF || (car != '!')) //control z to leave
        if (car == 't') ++cuenta;
    printf("\n %d letras t \n", cuenta);
    return 0;
}
