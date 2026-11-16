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