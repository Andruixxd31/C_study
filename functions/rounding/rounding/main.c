//Program that has a function that lets tou round by the number of decimals specified
#include <stdio.h>

int main() {
    float num = 359.1234567;
    float m = .01;
//    float r = n/m;
    num = floor(10000*num)/10000;
    printf("%f \n", num);
    return 0;
}
