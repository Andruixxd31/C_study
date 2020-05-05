//
//  main.c
//  pointer_of_pointer
//
//  Created by Andres Díaz de León on 05/05/20.
//  Copyright © 2020 Andres. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int value = 100;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    
    value = 95;
    *ptr1 = 105; //value is now 95
    **ptr2 = 99; //value is no 99
    printf("%d\n", value);
}

