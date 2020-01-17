//Interchange two rows that are selected
#include <stdio.h>
#include <string.h>
void changeRows(int array[][5], int n, int m, int a, int b);
void printArray(int array[][5], int n, int m);


int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 5,
        m = 9;
    int a, b;
    char r = 'n';
    int array[9][5] = {{1,1,1,1,1},
                        {2,2,2,2,2},
                        {3,3,3,3,3},
                        {4,4,4,4,4},
                        {5,5,5,5,5},
                        {6,6,6,6,6},
                        {7,7,7,7,7},
                        {8,8,8,8,8},
                        {9,9,9,9,9},
    };
    do {
        puts("ingrese las filas a intercambiar: ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a == b || a > 9 || b > 9);
    if(a > b) changeRows(array, n, m, b, a);
    else changeRows(array, n, m, a, b);
    printArray(array, n, m);
    return 0;
}


void changeRows(int array[][5], int n, int m, int a, int b){
    int tempA[5];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == a-1) {
                tempA[j] = array[i][j];
                array[i][j] = array[b-1][j];
                array[b-1][j] = tempA[j];
            }
        }
    }
}

void printArray(int array[][5], int n, int m){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}
