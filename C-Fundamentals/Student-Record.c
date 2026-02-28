/*
 * Project: Student Record System
 * Author: Sıla Yaman
 * Date: February 2026
 */

#include <stdio.h>

struct Student {
    char name[50];
    int studentID;
};

void displayStudentInfo(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("ID:   %d\n", s.studentID);
}

int main() {
    struct Student info;

    printf("Enter student name: ");
    scanf("%49s", info.name); 

    printf("Enter student ID: ");
    scanf("%d", &info.studentID);

    displayStudentInfo(info);

    return 0;
}
