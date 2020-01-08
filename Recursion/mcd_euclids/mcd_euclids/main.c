#include <stdio.h>
int mcde(int a, int b);

int main(int argc, const char * argv[]) {
    int result = mcde(270, 291);
    printf("common denominator: %d \n", result);
    return 0;
}

int mcde(int a,int b){
    if(a >= b && a%b == 0) return b; //if the statment is true, the common denominator was found
    else if (a< b) return mcde(b, a); //if a is smaller the number are switched to check if the common denominator was a instead of b
    else return mcde(b, a%b); //returns a and r(a%b) to check if r is the common denominator
}
