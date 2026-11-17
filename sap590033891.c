#include <stdio.h>
#include <string.h>

struct Student {
    char sap[20];
    int roll;
    char name[50];
    char phone[20];
    char email[50];
    int year;
    int sem;
    float sgpa[8];
};

struct Student s[100];
int n = 0;

float cgpa(int i) {
    float sum = 0;
    int count = 0;

    for (int j = 0; j < 8; j++) {
        if (s[i].sgpa[j] > 0) {
            sum = sum + s[i].sgpa[j];
            count++;
        }
    }

    if (count == 0)
        return 0;

    return sum / count;
}

void add() {
    if (n >= 100) {
        printf("Student list is full\n");
        return;
    }

    printf("Enter SAP ID: ");
    scanf("%19s", s[n].sap);

    printf("Enter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %49[^\n]", s[n].name);

    printf("Enter Phone: ");
    scanf("%19s", s[n].phone);

    printf("Enter Email: ");
    scanf("%49s", s[n].email);

    printf("Enter Year (1-4): ");
    scanf("%d", &s[n].year);

    printf("Enter Semester (1-8): ");
    scanf("%d", &s[n].sem);

    for (int j = 0; j < 8; j++) {
        printf("Enter SGPA for semester %d (0 if not completed): ", j + 1);
        scanf("%f", &s[n].sgpa[j]);
    }

    n++;
    printf("Student Added Successfully!\n");
}

void display() {
    if (n == 0) {
        printf("No students found\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("SAP ID: %s\n", s[i].sap);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Phone: %s\n", s[i].phone);
        printf("Email: %s\n", s[i].email);
        printf("Year: %d\n", s[i].year);
        printf("Semester: %d\n", s[i].sem);
        printf("CGPA: %.2f\n", cgpa(i));
    }
}