#include <stdio.h>

struct inventory {
    char title[25];
    char pub_date[20];
    char autor[30];
    int num;
    int order;
    float price;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    struct inventory book[100]; //creating an array of 100 inventory structures;
    //gets(book[0].title); //a way to use the array
}
