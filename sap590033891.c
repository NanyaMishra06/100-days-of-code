// NAME=NANYA MISHRA
// BATCH 20
// SAP ID=590033891


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
void search() {
    char id[20];
    printf("Enter SAP ID: ");
    scanf("%19s", id);

    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].sap, id) == 0) {
            printf("Name: %s\n", s[i].name);
            printf("Roll: %d\n", s[i].roll);
            printf("Phone: %s\n", s[i].phone);
            printf("Email: %s\n", s[i].email);
            printf("Year: %d\n", s[i].year);
            printf("Semester: %d\n", s[i].sem);

            for (int j = 0; j < 8; j++)
                printf("SGPA %d: %.2f\n", j + 1, s[i].sgpa[j]);

            printf("CGPA: %.2f\n", cgpa(i));
            return;
        }
    }

    printf("Student Not Found\n");
}

void deleteStudent() {
    char id[20];
    printf("Enter SAP ID to delete: ");
    scanf("%19s", id);

    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].sap, id) == 0) {
            for (int j = i; j < n - 1; j++)
                s[j] = s[j + 1];

            n--;
            printf("Student Deleted\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

void yearAverage() {
    for (int y = 1; y <= 4; y++) {
        float sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (s[i].year == y && cgpa(i) > 0) {
                sum = sum + cgpa(i);
                count++;
            }
        }

        if (count > 0)
            printf("Year %d Average CGPA: %.2f\n", y, sum / count);
        else
            printf("Year %d: No CGPA available\n", y);
    }
}

void sortSAP() {
    struct Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(s[i].sap, s[j].sap) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    display();
}

void sortName() {
    struct Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    display();
}

void advisor() {
    char id[20];
    printf("Enter SAP ID: ");
    scanf("%19s", id);

    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].sap, id) == 0) {
            float c = cgpa(i);

            printf("CGPA: %.2f\n", c);

            if (c == 0)
                printf("No SGPA available\n");
            else if (c >= 9)
                printf("Excellent Performance! Keep it up.\n");
            else if (c >= 7)
                printf("Good Performance! Keep studying.\n");
            else if (c >= 5)
                printf("Needs Improvement! Study more.\n");
            else
                printf("Requires Immediate Attention! Work harder.\n");

            return;
        }
    }

    printf("Student Not Found\n");
}
int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Average CGPA by Year\n");
        printf("6. Sort by SAP ID\n");
        printf("7. Sort by Name\n");
        printf("8. Academic Advisor\n");
        printf("9. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: deleteStudent(); break;
            case 5: yearAverage(); break;
            case 6: sortSAP(); break;
            case 7: sortName(); break;
            case 8: advisor(); break;
            case 9: printf("Thank You!\n"); break;
            default: printf("Invalid Choice\n");
        }

    } while (choice != 9);

    return 0;
}