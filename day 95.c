// Return a structure containing top student's details from a function.
#include <stdio.h>
// Define a structure
struct Student {
    char name[50];
    int age;
    float grade;
};
struct Student getTopStudent() {
    // Implementation for finding top student
    struct Student topStudent;
    // ... (code to find top student)
    return topStudent;
}
int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name, age, and grade for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].grade);
    }
    struct Student topStudent = getTopStudent();
    printf("Top student: %s, Age: %d, Grade: %.2f\n", topStudent.name, topStudent.age, topStudent.grade);
    return 0;
}
