//Program that prints a chain backwards with regression
#include <stdio.h>
#include <string.h>

void functionA(int n);
void functionB(int n);


int main() {
    functionA(0);
    printf("\n");
}


void functionA(int n){
    char str[] = "maremoto"; //String that will be reversed
    if (n != strlen(str) - 1) //until it gets to the last index of the string it will start printing the characters from the newest function in wait to the oldest function in wait in the stack.
        functionB(n);
    printf("%c", str[n]);
}


void functionB(int n){
    functionA(++n);
}
