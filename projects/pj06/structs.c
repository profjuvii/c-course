#include <stdio.h>
#include <string.h> // strncpy() copies part of a string without risking a buffer overflow


// define a structure to hold information about a person
struct person{
    char name[20];      // person name
    char surname[20];   // person surname
    int age;            // person age
};


int main(int argc, char* argv[]){
    // define and initialize person1 using designated initializers
    struct person person1 = {
        .name = "Alvina",
        .surname = "Antony",
        .age = 28
    };

    // define person2 and initialize its fields using strncpy() for strings and direct assignment for age
    struct person person2;
    strncpy(person2.name, "Cliff", sizeof(person2.name) - 1);
    person2.name[sizeof(person2.name) - 1] = '\0';
    strncpy(person2.surname, "Antony", sizeof(person2.surname) - 1);
    person2.surname[sizeof(person2.surname) - 1] = '\0';
    person2.age = 31;

    // print information about person1 and person2
    printf("PERSON 1:\n\tName: %s\n\tSurname: %s\n\tAge: %d\n", person1.name, person1.surname, person1.age);
    printf("PERSON 2:\n\tName: %s\n\tSurname: %s\n\tAge: %d\n", person2.name, person2.surname, person2.age);

    // the compiler has aligned the structure size to the nearest multiple of 4 or 8 (depending on the compiler settings)
    printf("Structure size in bytes: %lu\n", sizeof(struct person));
    
    return 0;
}
