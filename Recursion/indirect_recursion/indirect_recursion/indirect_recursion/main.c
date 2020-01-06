#include <stdio.h>
void functionA(char c);
void functionB(char c);

int main(){
    printf("\n");
    functionA('Z');
    printf("\n");
    return 0;
}

void functionA(char c){
    if (c > 'A') //base case, gets to A and finally prints A and later the functions that went before A, from newest to oldes until it gets to the original c.
        functionB(c);
    printf("%c", c);
}

void functionB(char c){
    functionA(--c);
}

