#include <stdio.h>
void filterA(int array[], int n);
void printNewArray(int array[], int treshold);

int main(int argc, const char * argv[]) {
    int n = 10;
    int array[10] = {4,7,11,4,9,5,11,7,3,5};
    filterA(array, n);
    return 0;
}

void filterA(int array[], int n){
    int treshHold = n;
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (array[i] == array[j] && j < treshHold) {
                temp = array[j];
                array[j] = array[treshHold];
                array[treshHold] = temp;
                treshHold--;
                printf("tr: %d ", treshHold);
//                printNewArray(array, treshHold);
            }
        }
    }
    printf("tr: %d ", treshHold);
    printNewArray(array, treshHold);
}


void printNewArray(int array[], int treshold){
    printf(" --> ");
    for (int i = 0; i < treshold; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");
}
