#include <stdio.h>

struct persona { //this structure is type person
    char nombre[30];
    int edad;
    float altura;
    float peso;
};

int main(int argc, const char * argv[]) {
    struct persona mar; //the variable of the type person structure is mar
    printf("Sizeof(persona) : %lu \n", sizeof(mar)); //seeing how much space the structure occupies
    
}

