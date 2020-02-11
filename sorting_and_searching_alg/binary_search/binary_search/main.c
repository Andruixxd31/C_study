#include <stdio.h>
//Binary search algorithm. When an array is sorted the binary search works by choosing the middle
//of the array, it compares the middle value to the one that is wanted. If its smaller or larger
//it picks the half that contains the value. The process is repeated until finding the value or
//getting an empty array, which means the value is not in the array.
//The complexity of the algorithm is O(logn)
int binSearch(int list[], int n, int key);


int main(int argc, const char * argv[]) {
    int list[] = {-8,4,5,9,12,18,25,40,60};
    int value = binSearch(list, 9, 30);
    if (value == -1) printf("the value was not found \n");
    else printf("The value was found \n");
    return 0;
}

int binSearch(int list[], int n, int key){
    //middle is the position being compared to the key
    //middle value is the value of the middle position
    int middle, low, high, middleValue;
    low = 0;
    high = n - 1;
    while (low <= high) { //If truw the entire list has been searched, and no value was found.
        middle = (low + high) / 2;
        middleValue = list[middle];
        if (key == middleValue) return middle; //key was found
        else if (key < middleValue) high = middle - 1; //to ignore the previous middle value
        else low = middle + 1; //to ignore the previous middle value
    }
    return -1;
}
