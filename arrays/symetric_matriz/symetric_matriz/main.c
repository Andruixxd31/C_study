//Excercise given by the book
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8
#define randomize (srand(time (NULL)))
#define random(num) (rand()% (num))

void gen_mat(int a[][N], int n); //generates array
int simetrica(int a[][N], int n); //checks if the array is symetric
void escribe_mat(int a[][N], int n); //prints the array that was found to be symetric 

int main() {
    int a[N][N];
    int n;
    int es_sim;
    randomize;
    do {
        printf("\nTamaño de cada dimension de la matriz, maximo %d: ",N);
        scanf("%d",&n);
    } while (n<2 || n>N);
    do {
        gen_mat(a, n);
        es_sim = simetrica(a, n);
        if(es_sim){
            puts("\n Econtrada la matriz simetrica.\n");
            escribe_mat(a, n);
        }
    } while (!es_sim);
    return 0;
}

void gen_mat(int a[][N], int n){
    int i, j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            a[i][j] = random(N);
        }
    }
}


int simetrica(int a[][N], int n){
    int i, j;
    int es_simetrica;
    for (es_simetrica = 1, i=0; i<n-1 && es_simetrica; i++) {
        for (j=i+1; j<n && es_simetrica; j++) {
            if (a[i][j] != a[j][i]) {
                es_simetrica = 0;
            }
        }
    }
    return es_simetrica;
}


void escribe_mat(int a[][N], int n){
    int i, j;
    puts("\t Matriz analizada");
    puts("\t--------------- \n");
    for (i = 0; i<n; i++) {
//        putchar("\t");
        for (j = 0; j < n; j++) {
            printf("%d %c", a[i][j], (j == n-1 ? '\n' : ' '));
        }
    }
}
