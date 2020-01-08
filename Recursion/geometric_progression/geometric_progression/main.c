//Program that with recursion makes a geometric progression.
//x^0 + x^1 + x^2 + x^3 + ... + x^n

#include <stdio.h>
#include <math.h>
int geometric_sum(int x, int n);

int main() {
    int n, x;
    do {
        //Getting the value x which will have it's exponent raised in the progression
        //n is the number of elements. the larger exponent in the sequence will be n-1
        printf("Introduce a value: ");
        scanf("%d", &x);
        printf("Introduce the number of elements: ");
        scanf("%d", &n);
    } while (n < 1 && x < 1);
    int res = geometric_sum(x, n-1); //n is subtracted by one so that each time x gets raised by n, n wont have to be modified
    printf("%d \n", res);
    return 0;
}

int geometric_sum(int x, int n){
    if (n == 0){
        return 1;
    }else{
        return geometric_sum(x, n-1) + pow(x, n); //The last result plus x raised to the current n. That way the next number will be added by the total of the current sum.
    }
}
