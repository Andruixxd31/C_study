//Gets the sum of all numbers in a array except the ones in the diagonal
#include <stdio.h>
int sum(int array[][5], int n, int m);


int main(int argc, const char * argv[]) {
    int array[5][5] = {{4,2,3,7,5},
                        {7,0,1,9,2},
                        {1,6,2,4,7},
                        {3,9,6,1,3},
                        {5,7,4,2,9}};
    int result = sum(array, 5, 5);
    printf("The sum is equal to %d: ", result);
    return 0;
}

int sum(int array[][5], int n, int m){
    int total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i != j) {
                total += array[i][j];
            }
        }
    }
    return total;
}
