//a bubble sort algorithm
#include <stdio.h>

void bubbleSort(int a[], int n);

int main(int argc, const char * argv[]) {
    int array[] = {50,20,40,80,30};
    bubbleSort(array, 5);
}

void bubbleSort(int a[], int n){
    int interruptor = 1;
    int pass, j;
    //The first loop keeps count on the movements made.
    /*The largest number will get pushed to right on the first loop, so in the following loops it will not be necessary to compare it with other
     numbers. Then the same thing will happen to 50. So each time the second loop will move to less indexes.*/
    for (pass = 0; pass < n-1 && interruptor; pass++) {
        
        interruptor = 0;
        for (j = 0; j < n-pass-1; j++) {
            printf("move#%d ", j);
            if (a[j] > a[j+1]) {
                interruptor = 1;
                int aux = a[j];
                a[j] = a[j +1];
                a[j +1] = aux;
            }
        }
    }
    printf("\n");
}
