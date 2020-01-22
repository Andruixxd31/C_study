#include <stdio.h>
//sorts the smaller numbers to the left. goes comparing each element form left to right and compares the element to the elements of its left until it finds a value smaller than itself.
//Its like starting with one card, putting anew one to the right of it and start moving the newest card util it finds its place
//has te same complexity as bubble sort but the code is cleaner

void insertionSort(int a[], int n);

int main(int argc, const char * argv[]) {
    int array[] = {50,20,40,80,30};
    insertionSort(array, 5);
    for (int i = 0; i < 5; i++) { //pritning the sorted array
        printf("%d, ", array[i]);
    }
}

void insertionSort(int a[], int n){
    int i, j;
    int aux;
    for (i = 1; i < n; i++) {
        j = i;
        aux = a[i];
        while (j > 0 && aux < a[j - 1]) {
             //aux is the card in the current i index and j-1 is the index to the left of it. if j is not at the start and the current index is bigger they switched
            //then j is decreased the be again to the left the card being compared
            a[j] = a[j - 1];
            j--; //j will keep decreasing until a[j -1] is smaller than a[i]. That way it will not unecessarily tavel all the way to the left
        }
        a[j] = aux;
    }
    printf("\n");
}
