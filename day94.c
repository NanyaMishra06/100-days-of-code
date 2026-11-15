// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function that accepts a structure as a parameter and prints its members
void printStudent(struct Student s) {
    printf("Student Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    // Declare and initialize a structure variable
    struct Student student1;
    student1.id = 101;
    strcpy(student1.name, "Rahul");
    student1.marks = 89.5;

    // Pass the structure to the function
    printStudent(student1);

    return 0;
}