#include <stdio.h>

struct info_dir {
    char address[25];
    char city[20];
    char province[20];
    long int zip_code;
};

struct employee {
    char name_emp[25];
     //using the structure type info_dir to use it in this structure
    //Now it has and addres, city, province and zip_code member
    struct info_dir addres_emp;
    double salary;
};

struct client {
    char name_client[25];
    struct info_dir addres_client; 
    double money;
};

int main(int argc, const char * argv[]) {
    return 0;
}
