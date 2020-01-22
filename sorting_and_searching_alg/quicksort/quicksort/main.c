//Quick sort algorithm, grabs a value in the middle which will be the pivot and moves the elements smaller than the pivot
//to the left and the bigger ones to the right.
//It repeats the same steps with the generated segments until the array is sorted.
#include <stdio.h>
void quickSort(int a[], int first, int last);
void printArray(int a[], int n);

int main(int argc, const char * argv[]) {
    int n = 12;
    int array[12] = {79,21,15,99,88,65,75,85,76,46,84,24};
    quickSort(array, 0, n-1);
    printArray(array, n);
    return 0;
}

void quickSort(int a[], int first, int last){
    int i, j, central, pivot;
    central = (first + last) / 2;
    pivot = a[central]; //the pivot will be the value in the middle
    i = first;
    j = last;
    do {
        while (a[i] < pivot) i++; //if the value at the i index is smaller i wil move to the right
        while (a[j] > pivot) j--; //if the value at the j index is bigger j wil move to the left
        //when both the values at the i index and at the j index don't satisfy the conditional of the loop
        //The values will be switched to their respective side if i <= j.
        if (i <= j) { //Switching the values
            double temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j); //while the two indexes don't cross the the comparison with the pivot will keep going.
    //the array is passed by reference, if its changed in a another scope the changes will stay.
    if (first < j) quickSort(a, first, j); //calling the function to make the quicksort with everything on the left to the pivot
    if (i < last) quickSort(a, i, last); //calling the function to make the quicksort with everything on the right to the pivot
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d, ", a[i]);
    }
    printf("\n");
}
