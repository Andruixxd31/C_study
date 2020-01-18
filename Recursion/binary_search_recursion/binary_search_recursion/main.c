//A binary search algorithm that functions through recursion
#include <stdio.h>
int binarySearch(int a[], int key, int lo, int hi, int mid);


int main(int argc, const char * argv[]) {
    int array[] = {10,20,30,40,50,60,70,80,90};
    int key;
    int lo = 0, hi = 8; //
    int mid = lo + (hi - lo) / 2;
    do {
        printf("Enter a key: ");
        scanf("%d", &key);
    } while (key < 0);
    int position = binarySearch(array, key, lo, hi, mid);
    printf("The number %d is at the position %d \n", key, position);
    return 0;
}


int binarySearch(int a[], int key, int lo, int hi, int mid){
    printf("%d, %d, %d\n", lo, hi, mid);
    if (lo >= hi) return -1;
    if (key == a[mid]) return mid;
    else if (key < a[mid]) {
        hi = mid -1;
        return binarySearch(a, key, lo, hi, lo + (hi - lo) / 2); //hi is adjusted to cut everything equal or higher than mid, mid is recalculated with lo and the new hi
    }
    
    else if (key > a[mid]){
        lo = mid + 1;
        return binarySearch(a, key, lo, hi, lo + (hi - lo) / 2); //lo is adjusted to cut everything equal or lower than mid, mid is recalculated with the new lo and hi
    }
    else return -1; //might need to fix these, is kind of unecessary
}
