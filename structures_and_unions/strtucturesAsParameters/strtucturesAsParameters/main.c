#include <stdio.h>


struct person_info{
    char name[20];
    char city[30];
};

//prototypes of functions
void input_p(struct person_info* pp);
void info_p(struct person_info p);



void main(void){
    struct person_info reg_data;
    //Passing the variable by reference
    input_p(&reg_data);
    //Passed by value
    info_p(reg_data);
    printf("\n press any character");
    getchar();
}

void input_p(struct person_info* pp){
    puts("Input of the data of the person");
    printf("Name: "); gets(pp -> name);
    printf("City: "); gets(pp -> city);
}
void info_p(struct person_info p){
    puts("info of person");
    puts(p.name);
    puts(p.city);
}
