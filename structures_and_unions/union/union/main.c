//An union is similar to a stucture, but it stores all of its mombers in one position
//The size of the union is the size of it biggest member
//One reason to use them is to save space. If the members don't need to be used simultaneously
#include <stdio.h>

union share { //The size of the union is 8 bytes
    char letter;
    int element;
    float price;
    double z;
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
