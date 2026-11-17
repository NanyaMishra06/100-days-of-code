// Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int id;
    char name[100];
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    emp.id = 1;
    strcpy(emp.name, "John Doe");
    emp.joiningDate.day = 15;
    emp.joiningDate.month = 8;
    emp.joiningDate.year = 2020;

    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Joining Date: %d/%d/%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}

