//Simple function that checks if a number is positive or negative o 0 by retunrning a character
#include <stdio.h>
int conf(int n, int m);

int main() {
    printf("%d \n", conf(90,30));
    return 0;
}

int conf(int n, int m){
    if ((n % m == 0) || (m % n == 0)) return 1;
    else return 0;
}
