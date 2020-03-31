#include <stdio.h>

struct complejo {
    float realN;
    float imaginaryN;
    float module;
};

int main(int argc, const char * argv[]) {
    struct complejo z;
    printf("\nReal number: ");
    scanf("%f", &z.realN);//accessing the memory z in the variable realN
    printf("\nImaginary number: ");
    scanf("%f", &z.imaginaryN);
    z.module = sqrt(z.realN * z.realN + z.imaginaryN * z.imaginaryN);
    printf("\n%f module: ", z.module);
    
    float x,y;
    struct complejo *pz;
    pz = &z; x = z.realN; y = z.imaginaryN;
    printf("\nNúmero complejo (%.1f,%.1f), modulo: %.2f \n",
           pz -> realN, pz-> imaginaryN, pz -> module);
}
 
