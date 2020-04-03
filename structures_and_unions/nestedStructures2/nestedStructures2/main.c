#include <stdio.h>
#include <time.h>


struct date {
    unsigned int day, month, year;
};

struct time {
    unsigned int hours, minutes;
};

enum operation_type {deposit, withdraw, aldia, state};

typedef struct date Date;
typedef struct time Time;
typedef enum operation_type OperationType;

struct operation_registration { //nested structures
    long account_number;
    float quantity;
    OperationType operation;
    Date d; //d is a Date type structure
    Time t; //t is a Time type structure
};

typedef struct operation_registration OperationRegistration;
OperationRegistration input(void); //declaration of the function


int main(int argc, const char * argv[]) {
    OperationRegistration w;
    w = input();
    printf("\n Operation completed\n\n");
    printf("\t%ld\n", w.account_number);
    printf("\t%d-%d-%d\n", w.d.day, w.d.month, w.d.year);
    printf("\t%d:%d\n", w.t.hours, w.t.minutes);
}

OperationRegistration input(){
//    int x, y, z;
    OperationRegistration one;
    printf("\nAccount Number: ");
    scanf("%ld", &one.account_number); //allocates the data into the variable in the structure
    puts("\tType of operation");
    
    puts("deposit(0)");
    puts("withdraw of funds(1)");
    puts("aldia(2)");
    puts("state of the account(3)");
    scanf("%d", &one.operation); //acces
    
    printf("\nDate (day, month, year): ");
    scanf("%d %d %d", &one.d.day, &one.d.month, &one.d.year);
    
    printf("Time of the operation: ");
    scanf("%d %d", &one.t.hours, &one.t.minutes);

    return one;
}
