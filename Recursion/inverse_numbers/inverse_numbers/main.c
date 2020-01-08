#include <stdio.h>
void funcionA(int num);
void funcionB(int num);
int static oNum;

int main() {
    int num;
    do {
        printf("Introduce a positive number: ");
        scanf("%d", &num);
    } while (num <= 0 );
    oNum = num;
    funcionA(num);
    return 0;
}

void funcionA(int num){
    if (num <= 9 )
        printf("%d", num);
    else
        return funcionA(num/10 + num%10);
}

void funcionB(int num){
    funcionA(num / 10);
}
