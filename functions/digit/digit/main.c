//Simple function with isdigit to confirm of a character is a digit
#include <stdio.h>
#include <ctype.h>
//Library that includes isdigit
void digit(char x);

int main() {
    digit('e');
    return 0;
}

void digit(char x){
    if (isnumber(x) != 0) printf("%s is a digit \n", &x);
    else printf("%s is not a digit \n", &x);
}
