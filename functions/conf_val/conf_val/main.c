//Simple function that checks if a number is positive or negative o 0 by retunrning a character
#include <stdio.h>
char conf(int n);

int main() {
    char letter = conf(-2);
    printf("%s \n", &letter);
    return 0;
}

char conf(n){
    if (n > 0) return 'P';
    else return 'N';
}
