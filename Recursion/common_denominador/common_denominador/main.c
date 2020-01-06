#include <stdio.h>
int mcd(int m, int n);

int main(int argc, const char * argv[]) {
    int m,n;
    do{
        printf("Introduzca dos enteros positivos: ");
        scanf("%d %d", &m, &n);
    }while((n <= 0) || (m <= 0));
    printf("El maximo común divisor es %d \n", mcd(m,n));
    return 0;
}

int mcd(int m, int n){
    if (n <= m && m%n == 0)
        return n;
    else if (m < n)
        return mcd(n, m);
    else
        return mcd(n, m%n);
}
