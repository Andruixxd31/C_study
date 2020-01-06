#include <stdio.h>
#include <math.h>

void calcPolar(float x, float y);

int main(int argc, const char * argv[]) {
    float x, y;
    do{
        printf("coordinates: ");
        scanf("%f %f", &x, &y);
    }while (x < 0 || y < 0);
    calcPolar(x,y);
}

void calcPolar(float x, float y){
    x = sqrt(x*x + y*y);
    y = atan(y/x);
    printf("coordinate (%1.2f,%1.2f)", x, y);
}
