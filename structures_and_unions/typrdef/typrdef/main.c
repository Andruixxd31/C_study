//typedef lets the developer create a sinonym of a defined data type.
#include <stdio.h>

struct complejo {
    float x,y;
};

typedef struct racional {
    int numerador;
    int denominador;
} Racional;


int main(int argc, const char * argv[]) {
    typedef struct complejo complex;
    complex v[12];
    
    struct numero  {
        complex a;
        Racional r;
    };
}
