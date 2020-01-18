//Making a pascal pryramid with only one array
//... fuck

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    do {
        printf("Enter the number of levels of the pyramid: ");
        scanf("%d", &n);
    } while (n < 1);
    
    return 0;
}



/*
1
2 3
4 5 6
7 8 9 10
*/
//Do the Floyd's triangle as well.
