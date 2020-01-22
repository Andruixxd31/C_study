//The bubble sort will continue until interchangeIndex > 0
#include <stdio.h>

void bubbleSort(int a[], int n);

int main(int argc, const char * argv[]) {
    int array[] = {50,20,40,80,30};
    bubbleSort(array, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d, ", array[i]);
    }
}

void bubbleSort(int a[], int n){
    int i, j;
    int interchangeIndex;
    i = n-1; //i is the index of the last element
    while(i > 0){
        interchangeIndex = 0;
        for (j = 0; j < i; j++){
            printf("move #%d", j);
            if (a[j+1] < a[j]) {
                int aux = a[j];
                a[j] = a[j +1];
                a[j +1] = aux;
                interchangeIndex = j;
            }
    }
            i = interchangeIndex; //i gets the value of the last change
            printf("last index moved: %d \n", a[interchangeIndex]);
    }
    printf("\n");
}
