//function that will transpose an array
//In this program the array is already provided with its dimensions
#include <stdio.h>
void transpose(int array[][3], int n, int m);

int main() {
    //3X5 array
    int array[5][3] = {{4,2,3},
                      {7,0,1},
                      {1,6,2},
                      {3,9,6},
                      {5,7,4}};
    int n = 5,
        m = 3;
    transpose(array, n, m);
    return 0;
}

void transpose(int array[][3], int n, int m){
    printf("%d ", array[0][0]);
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
